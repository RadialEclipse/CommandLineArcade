#pragma once
#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

class HelloWorld
{
	public:
		int num = 0 ;
		

		HelloWorld(int num)
		{
			std::cout << "Contructor created successfully!\n";
			//this->num = num;
			
		}
		~HelloWorld()
		{
			std::cout << "The constructor was destroyed!" << std::endl;
			std::cout << "\nProgram terminated.";
		}

		void printNum(int result)
		{
			std::cout << num << std::endl;
			std::cout << "The result was: " << result << "\nThis program will cease in : \n";
		}

		void addNum(int num,int numTwo)
		{
			int result = num += numTwo;
			printNum(result);
			
		}

		void timer(int seconds)
		{
			seconds = seconds;

			while (seconds >= 1)
			{
				std::cout << seconds << "...\n";

				std::this_thread::sleep_for(std::chrono::seconds(1));

				seconds--;

			}
		}
	
};