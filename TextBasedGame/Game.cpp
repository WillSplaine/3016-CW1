#include "Game.h"
#include <limits>

Game::Game() 
{
	choice = 0;
	playing = true;
	adventureChoice = 0;
	adventureStarted = false;

	
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
	std::cout << "1: Begin Adventure" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level Up" << std::endl;
	std::cout << "4: Character Stats" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << std::endl;



	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		
		beginAdventure();
		break;
	case 4:
		character.printStats();

		break;
	
	default:
		std::cout << "Invalid choice. Please read through the options and try again\n";
		break;
	   }
	
	
}
void Game::beginAdventure()
{
	std::cout << "The First Adventure" << std::endl << std::endl;


	std::cout << "You find yourself standing at the edge of a mysterious forest.\n";
	std::cout << "The air is thick with magic, and the trees seem to whisper secrets.\n";
	std::cout << "A voice echoes in your mind, 'Welcome, brave traveler, to the Enchanted Forest.\n";
	std::cout << "Your destiny awaits. Will you dare to explore?'\n";
	std::cout << std::endl;

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Explore Deeper" << std::endl;
	std::cout << "2: Take a Nap" << std::endl;
	std::cout << std::endl;

	

	int adventureChoice;
	std::cout << "Enter your choice: ";
	std::cin >> adventureChoice;
	std::cout << std::endl;

	adventureStarted = true;

	switch (adventureChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		std::cout << "You decide to explore deeper into the forest. The journey is perilous...\n";
		XRoads();
		break;
	case 2:
		std::cout << "You choose to rest under a magical tree. The soothing energy rejuvenates your spirit.\n";
		beginAdventure();
		break;
	default:
		std::cout << "Invalid choice. The forest seems to ignore your indecision and awaits your next move.\n";
		break;
	}
}

void Game::XRoads()
{
	std::cout << "The Crossroad Challenges" << std::endl << std::endl;

	std::cout << "As you venture deeper, you stumble upon a crossroad with three paths\n";
	std::cout << "At the end of the first path, you can see a mighty owl with spectactles upon it's beak\n";
	std::cout << "At the end of the second path a scalable rockface blocks your view\n";
	std::cout << "In the middle of the final path, a Leprechaun dances and sings\n";
	std::cout << std::endl;


	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Take the First Path" << std::endl;
	std::cout << "2: Take the Second Path" << std::endl;
	std::cout << "3: Take the Third Path" << std::endl;
	std::cout << std::endl;

	int XRChoice;
	std::cout << "Enter your Decision: ";
	std::cin >> XRChoice;
	std::cout << std::endl;

	XRStarted = true;

	switch (XRChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		std::cout << "You walk towards the Mighty Owl, as you get closer it looks at you and Chuckles\n";
		IntelligenceChall();
		break;
	case 2:
		std::cout << "As you get closer to the rockface the task becomes more daunting and a wave of anxiety hits you\n";
		beginAdventure();
		break;
	case 3:
		std::cout << "Walking closer, the Leprechaun sees you and sits on the fool waving what seems to be a cup\n";
		beginAdventure();
		break;
	default:
		std::cout << "Invalid choice. The people of the crossroad seem to stare at you awaiting your next move.\n";
		break;
	}
}
void Game::IntelligenceChall()
{
	std::cout << "The Crossroad Challenges" << std::endl << std::endl;

	std::cout << "As you venture deeper, you stumble upon a crossroad with three paths\n";
	std::cout << "At the end of the first path, you can see a mighty owl with spectactles upon it's beak\n";
	std::cout << "At the end of the second path a scalable rockface blocks your view\n";
	std::cout << "In the middle of the final path, a Leprechaun dances and sings\n";
	std::cout << std::endl;

	
	

	std::cout << "First Riddle: The more you take, the more you leave behind. What am I?\n";
	std::cout << "The answer is ...";
	std::string playerAnswer1;
	std::cin >> playerAnswer1;
	

	if (playerAnswer1 == "footsteps" ||  "Footsteps") {
		std::cout << "Correct! Well Done\n";
		
		
		std::cout << "Second Riddle: I always come, but never today. What am I?\n";
		std::cout << "The answer is ...";
		std::string playerAnswer2;
		std::cin >> playerAnswer2;

		if (playerAnswer2 == "tomorrow" || "Tomorrow") {
			std::cout << "Correct! Well Done, You have passed my trial go on from this path with my blessing\n";
		}
		else {
			std::cout << "Incorrect!";
			std::cout << "The Owl pecks you due to your stupidity\n";
		}
	} else {
		std::cout << "Incorrect!";
		std::cout << "The Owl pecks you due to your stupidity\n";
	}


}