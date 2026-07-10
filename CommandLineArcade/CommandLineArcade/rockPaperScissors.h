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
		char playAgain = 'y';

			std::cout << "Rock, Paper, Scissors has begun!\n\n";
			std::cout << "Welcome to Rock, Paper, Scissors!\n";
			std::cout << "The Computer will pick one of three options (Rock, Paper, or Scissors).\n";

		while (playAgain == 'y' || playAgain == 'Y')
		{
			std::string choices[3] = { "Rock", "Paper", "Scissors" };
			std::string computerChoice;
			std::string userInput;

			std::random_device rd;
			std::mt19937 gen(rd());

			std::sample(std::begin(choices), std::end(choices), &computerChoice, 1, gen);

			//computerChoice = "Rock";
			std::cout << "TEST: The Computer chose " << computerChoice << "\n\n";
			std::cout << "Choose what option you'd like to play against the computer and try to win!\n";
			std::cin >> userInput;

			//Tie conditions
			if (userInput == "Rock" || userInput == "rock" && computerChoice == "Rock" || computerChoice == "rock")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "TIE! Looks like you and the Computer had the same idea!\nWould you like to try again? (Y/N)\n";
				std::cin >> playAgain;
			}
			else if (userInput == "Paper" || userInput == "paper" && computerChoice == "Paper" || computerChoice == "paper")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "TIE! You should try stacking paper like this in real life!\nTry again? (Y/N)\n";
				std::cin >> playAgain;

			}
			else if (userInput == "Scissors" || userInput == "scissors" && computerChoice == "Scissors" || computerChoice == "scissors")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "TIE! You and the Computer both picked Scissors, you two must be doing arts and crafts!\nTry again? (Y/N)\n";
				std::cin >> playAgain;

			}
			//Loss conditions
			else if (userInput == "Rock" || userInput == "rock" && computerChoice == "Paper" || computerChoice == "paper")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "LOSS! Looks like your rock got wrapped up like a Christmas present! Better luck next time.\nTry Again? (Y/N)\n";
				std::cin >> playAgain;
			}
			else if (userInput == "Paper" || userInput == "paper" && computerChoice == "Scissors" || computerChoice == "scissors")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "LOSS! The Computer just cut down any hopes of you winning this time. Haha, see what I did there?\nTry Again? (Y/N)\n";
				std::cin >> playAgain;
			}
			else if (userInput == "Scissors" || userInput == "scissors" && computerChoice == "Rock" || computerChoice == "rock")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "LOSS!I was gonna say you crushed it, but it looks like the computer crushed you instead.\nTry Again? (Y/N)\n";
				std::cin >> playAgain;
			}
			//Win conditions
			else if (userInput == "Rock" || userInput == "rock" && computerChoice == "Scissors" || computerChoice == "scissors")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "WIN! You CRUSHED it! Nice guess.\nTry Again? (Y/N)\n";
				std::cin >> playAgain;
			}
			else if (userInput == "Paper" || userInput == "paper" && computerChoice == "Rock" || computerChoice == "rock")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "WIN! I'm pretty sure a rock is more durable than paper, but I suppose if you wrap it enough it won't matter.\nTry Again? (Y/N)\n";
				std::cin >> playAgain;
			}
			else if (userInput == "Scissors" || userInput == "scissors" && computerChoice == "Paper" || computerChoice == "paper")
			{
				std::cout << "You chose " << userInput << ".\n";
				std::cout << "The Computer chose " << computerChoice << ".\n";
				std::cout << "WIN! Sharp victory!\nTry Again? (Y/N)\n";
				std::cin >> playAgain;
			}
		}

		std::cout << "\nThank you for playing! Have a good day.";
		std::cout << "\n\nProgram terminated...";
		std::exit(EXIT_SUCCESS);

	}

	
};