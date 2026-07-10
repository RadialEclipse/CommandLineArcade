#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <random>
#include <algorithm>
#include <cstdlib>

class GuessANumber
{
public:
	GuessANumber()
	{
		std::cout << "Guss A Number has begun!\n";
		loadTimer(3);
		playGAN();
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

	//GAN is Guess A Number
	void playGAN()
	{
		std::cout << "\n\nThe Computer has numbers 1-10 to choose from.\n";
		std::cout << "Try to guess the number correctly to win!\n\n";
		
		int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int computerNumber;
		int userInput;

		std::random_device rd;
		std::mt19937 gen(rd());

		std::sample(std::begin(numbers), std::end(numbers), &computerNumber, 1, gen);

		std::cout << "What do you think the number is?\n\n";
		std::cout << "TEST: Computer number is " << computerNumber << "\n\n";
		std::cin >> userInput;

		while (userInput != computerNumber)
		{
			if (userInput < computerNumber)
			{
				std::cout << "Number is too low. Try again.\n\n";
				std::cin >> userInput;
			}
			else if (userInput > computerNumber)
			{
				std::cout << "Number is too high. Try Again.\n\n";
				std::cin >> userInput;
			}

		}
				std::cout << "CONGRATULATIONS!! You guessed the number correctly and beat the computer.\n\n";
				std::cout << "Would you like to play again? (Y/N)\n\n";
				
				char confirm;
				std::cin >> confirm;

				replayGAN(confirm);			
	}

	void loadTimer(int seconds)
	{
		while (seconds > 0)
		{
			std::cout << seconds << "...\n";

			std::this_thread::sleep_for(std::chrono::seconds(1));

			seconds--;
		}
	}

	void replayGAN(char replayInput)
	{
		if (replayInput == 'Y' || replayInput == 'y')
		{
			std::cout << "Replay confirmed. Have fun!\n\n";
			playGAN();
		}
		else if (replayInput == 'N' || replayInput == 'n')
		{
			std::cout << "Thank you for playing! Have A good day!\n\n";
			std::cout << "Program terminated...\n\n";
			std::exit(EXIT_SUCCESS);
		}
	}
};
