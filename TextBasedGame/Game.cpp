#include "Game.h"

Game::Game() 
{
	choice = 0;
	playing = true;

	
}

Game::~Game()
{

}


//Functions
void Game::initGame()
{
	std::string name;
	std::cout << "Enter Player Name:";
	getline(std::cin, name);

	std::string race;
	std::cout << "Enter Player's Race:";
	getline(std::cin, race);
	character.initialize(name,race);

}

void Game::mainMenu()
{
	std::cout << "Main Menu" << std::endl << std::endl;

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level Up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character Stats" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	std::cout << std::endl;

	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		character.printStats();

		break;

	default:
		break;
	}
}