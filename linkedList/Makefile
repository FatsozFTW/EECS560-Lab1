
prog: main.o Exec.o
	g++ -g -Wall -std=c++11 main.o Exec.o -o prog


main.o: main.cpp LinkedList.h Node.h
	g++ -g -Wall -std=c++11 -c main.cpp

Exec.o: Node.h Exec.h Exec.cpp
	g++ -g -Wall -std=c++11 -c Exec.cpp

clean:
	rm *.o prog
