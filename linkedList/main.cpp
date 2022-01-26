/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedList.h"
#include "Exec.h"
#include <string.h>

int main(int argc, char** argv)
{
	if(argc <2){
		std::cout << "Missing argument\n";
	}
	else {
		Exec test;
		test.run(argv[1]);
	}

	return (0);

}
