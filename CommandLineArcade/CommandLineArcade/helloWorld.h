#pragma once
#include <iostream>

class HelloWorld
{
	public:
		int num = 0;

		HelloWorld(int num)
		{
			this->num = num;
			
			//addNum();
			//std::cout << num << std::endl;

		}
		~HelloWorld()
		{
			std::cout << "The constructor was destroyed!" << std::endl;
		}

		/*void addNum(int num)
		{
			int result = num + 5;
		}*/

		void printNum()
		{
			std::cout << num << std::endl;
		}

		void addNum(int numTwo)
		{
			num += numTwo;

			
		}
	
};