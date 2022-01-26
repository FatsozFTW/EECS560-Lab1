#include "Exec.h"
#include <iostream>
#include "Node.h"
#include <string.h>
#include "LinkedList.h"
#include <fstream>
void Exec::run(std::string x)
{
  int userIn;
  std::ifstream myfile;
  myfile.open(x);
  if(myfile.is_open())
  {
    for(int i = 0; i <10; i++)
    {
      int temp;
      myfile >> temp;
      test.addFront(temp);
    }
  }
  do {
    std::cout << "\nChoose one operation from the options below:\n\n" <<
    "1. IsEmpty\n" <<
    "2. Length\n" <<
    "3. Insert\n" <<
    "4. Delete\n" <<
    "5. Find\n" <<
    "6. AppendList\n" <<
    "7. Print\n" <<
    "8. ReverseList\n"<<
    "9. Exit\n" <<
    "Insert here: ";
    std::cin >> userIn;
    while(1){
      if(userIn > 0 && userIn < 10)
      {
        ExitNum = userIn;
        break;
      }
      else {
        std::cout << "Invalid input try again\n";
        std::cin >>userIn;
      }
    }
    switch(userIn){
      case 1:
        IsEmpty();
        break;
      case 2:
        Length();
        break;
      case 3:
        Insert();
        break;
      case 4:
        Delete();
        break;
      case 5:
        Find();
        break;
      case 6:
        AppendList();
        break;
      case 7:
        Print();
        break;
      case 8:
        ReverseList();
        break;
      case 9:
        break;
    }
  } while(ExitNum != 9);

  myfile.close();
}

void Exec::IsEmpty()
{
  if(test.isEmpty())
  {
    std::cout << "It is empty\n";
  }
  else
  {
    std::cout << "It is not empty\n";
  }
}
void Exec::Length()
{
  std::cout << test.size();
  std::cout << "\n";
}
void Exec::Insert()
{
  int temp;
  std::cout << "Enter an integer to add: ";
  std::cin >> temp;
  test.addFront(temp);
  std::cout << "\n";
}
void Exec::Delete()
{
  int temp;
  std::cout << "Enter an integer to remove: ";
  std::cin >> temp;
  test.remove(temp);
  std::cout << "\n";
}
void Exec::Find()
{

}
void Exec::AppendList()
{

}
void Exec::Print()
{
  std::cout << "List: ";
  test.Print();
  std::cout << "\n";
}
void Exec::ReverseList()
{

}
