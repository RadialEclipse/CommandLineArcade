#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

class GuessANumber
{
public:
	GuessANumber()
	{
		std::cout << "Guss A Number has begun!\n";
	}
	~GuessANumber()
	{

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

	void playGAN(int input)
	{
		std::cout << "The Computer has numbers 1-10 to choose from.\n";
		std::cout << "Try to guess the number correctly to win!\n";
	}
};
