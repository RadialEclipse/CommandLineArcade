#include <iostream>
#include <string>
#include "guessANumber.h"
#include "rockPaperScissors.h"

void static welcomeMsg()
{
	std::cout << "Welcome to the Command Line Arcade!\n";
	std::cout << "Please enter a number (1-2) to select a game to play.\n";
	std::cout << "\nGame 1: Guess A Number\nGame 2: Rock Paper Scissors\n";
}

int main()
{
	int menuInput;
	char confirm;
	//GuessANumber playGAN;

	welcomeMsg();
	std::cin >> menuInput;
	
	if (menuInput == 1)
	{
		std::cout << "You selected Game " << menuInput << ", correct? (Y/N)\n";
		std::cin >> confirm;
		
			if (confirm == 'Y' || confirm == 'y')
			{
				
				std::cout << "Game " << menuInput << ":Guess A Number, has been selected.\n";
				std::cout << "Enjoy the game!!\n";
				GuessANumber gan;
				gan.playGAN();	
			}
			else if (confirm == 'N' || confirm == 'n')
			{
				welcomeMsg();
				std::cin >> confirm;
			}
			else
			{
				std::cout << "Please enter 'Y' for Yes, or 'N' for No.";
				std::cin >> confirm;
			}
	}
	else if (menuInput == 2)
	{
		std::cout << "You selected Game 2, correct? (Y/N)\n";
		std::cin >> confirm;

			if (confirm == 'Y' || confirm == 'y')
			{
				std::cout << "Game " << menuInput << ":Rock Paper Scissors, has been selected.\n";
				std::cout << "Enjoy the game!!\n\n";
				RockPaperScissors rps;
				rps.playRPS();
			}
			else if (confirm == 'N' || confirm == 'n')
			{
				welcomeMsg();
				std::cin >> confirm;
			}
			else
			{
				std::cout << "Please enter 'Y' for Yes, or 'N' for No.";
				std::cin >> confirm;
			}
	}
	else
	{
		std::cout << "Input invalid. Please enter a 1 or 2 in order to select a game to play.\n\n";
		welcomeMsg();
		std::cin >> confirm;
	}

	return 0;
}

