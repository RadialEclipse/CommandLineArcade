#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <random>
#include <algorithm>
#include <cstdlib>

class RockPaperScissors
{
public:

	RockPaperScissors()
	{
		playRPS();
	}
	~RockPaperScissors()
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

	void playRPS()
	{
		std::string choices[3] = { "Rock", "Paper", "Scissors" };
		std::string computerChoice;
		std::string userInput;
		char playAgain = 'y';

		std::cout << "Rock, Paper, Scissors has begun!\n\n";
		std::cout << "Welcome to Rock, Paper, Scissors!\n";
		std::cout << "The Computer will pick one of three options (Rock, Paper, or Scissors).\n";

		std::random_device rd;
		std::mt19937 gen(rd());

		std::sample(std::begin(choices), std::end(choices), &computerChoice, 1, gen);

		computerChoice = "Rock";
		std::cout << "TEST: The Computer chose " << computerChoice << "\n\n";
		std::cout << "Choose what option you'd like to play against the computer and try to win!\n";
		std::cin >> userInput;

		while (playAgain == 'y' || playAgain == 'Y')
		{

			if (userInput == "Rock" || userInput == "rock" && computerChoice == "Rock" || computerChoice == "rock")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "TIE! Looks like you and the Computer had the same idea!\nWould you like to try again?\n";
				std::cin >> playAgain;

				
				if (playAgain == 'n' || playAgain == 'N')
				{
					std::cout << "Thank you for playing! Have a good day.\n\n";
					std::exit(EXIT_SUCCESS);
				}

				std::cin >> userInput;

			}
			else if (userInput == "Paper" || userInput == "paper" && computerChoice == "Paper" || computerChoice == "paper")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "TIE! You should try stacking paper like this in real life!\nTry again.\n";

				std::cin >> userInput;
			}
			else if (userInput == "Scissors" || userInput == "scissors" && computerChoice == "Scissors" || computerChoice == "scissors")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "TIE! You and the Computer both picked Scissors, you two must be doing arts and crafts!\nTry again.\n";

				std::cin >> userInput;
			}
		}


	}

	void resetRPS()
	{

	}
};