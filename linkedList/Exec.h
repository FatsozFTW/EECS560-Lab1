#ifndef EXEC_H
#define EXEC_H
#include <iostream>
#include "Node.h"
#include <string.h>
#include "LinkedList.h"


class Exec{
public:
  void run(std::string x);
  void IsEmpty();
  void Length();
  void Insert();
  void Delete();
  void Find();
  void AppendList();
  void Print();
  void ReverseList();




private:
  int ExitNum;
  LinkedList <int> test;
};

#endif
