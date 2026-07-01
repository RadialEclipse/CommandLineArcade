#include <iostream>
#include <string>
#include "helloWorld.h"


int main()
{
	int inputNum;
	int secondNum;

	std::cout << "Please enter a number.\n";
	std::cin >> inputNum;

	std::cout << "Please enter a second number for addition.\n";
	std::cin >> secondNum;

	HelloWorld var(inputNum);
	var.addNum(inputNum,secondNum);
	//var.printNum();
	var.timer(3);
	//var.~HelloWorld();
	return 0;
}
