
template <typename T>
LinkedList<T>::LinkedList() : m_front(nullptr), m_size(0)
{

}

template <typename T>
LinkedList<T>::~LinkedList()
{
	while(!isEmpty())
	{
		removeFront();
	}
}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
	return(m_size == 0);
}

template <typename T>
int LinkedList<T>::size() const
{
	return(m_size);
}

template <typename T>
void LinkedList<T>::remove(T value)
{
	Node<T>* prev;
	Node<T>* head;
	Node<T>* temp = m_front;
	if(isEmpty())
	{
		std::cout << "Nothing deleted";
	}
	else if(check if just head)
	{

	}
	else
	{
		Node<T>* prev = m_front;
		
	}


}

template <typename T>
bool LinkedList<T>::search(T value) const
{
	Node<T>* temp = m_front;
	bool isFound = false;
	while( temp != NULL)
	{
		if(temp->getValue() == value)
		{
			isFound = true;
		}
		temp = temp->getNext();
	}
	return(isFound);
}

template <typename T>
void LinkedList<T>::addBack(T value)
{
	Node<T>* temp = nullptr;

	if(isEmpty())
	{
		m_front = new Node<T>(value);
	}
	else
	{
		temp = m_front;
		while(temp->getNext() != nullptr)
		{
			temp = temp->getNext();
		}

		temp->setNext( new Node<T>(value) );
	}

	m_size++;
}

template <typename T>
void LinkedList<T>::addFront(T value)
{
	Node<T>* temp = m_front;
	m_front = new Node<T>(value);
	m_front->setNext( temp );
	m_size++;
}

template <typename T>
bool LinkedList<T>::removeBack()
{

	Node<T>* lastNode = nullptr;
	Node<T>* secondintoLast = nullptr;
	bool isRemoved = false;

	if(isEmpty())
	{
		isRemoved = false;
	}
	if(m_front->getNext() == nullptr)
	{
		m_size--;
		delete m_front;
		isRemoved = true;
	}
	else{
		lastNode = m_front->getNext();
		secondintoLast = m_front;
		while(lastNode->getNext() != nullptr)
		{
				secondintoLast = secondintoLast->getNext();
				lastNode = lastNode->getNext();
		}
		delete lastNode;
		secondintoLast = nullptr;
		/** TODO
			Fix this method
		*/
		isRemoved = true;
		m_size--;
	}
	return(isRemoved);
}

template <typename T>
bool LinkedList<T>::removeFront()
{
	Node<T>* temp = nullptr;
	bool isRemoved = false;

	if(!isEmpty())
	{
		temp = m_front;
		m_front = temp->getNext();
		delete temp;
		m_size--;
		isRemoved = true;
	}

	return(isRemoved);
}

template <typename T>
void LinkedList<T>::Print()
{
	Node<T>* temp = m_front;
	while(temp != nullptr)
	{
		std::cout << temp->getValue() << " ";
		temp = temp->getNext();
	}
}
