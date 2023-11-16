#include "Game.h"
#include <limits>
#include <cstdlib>




Game::Game() 
{
	//
	choice = 0;
	playing = true;
	//
	adventureChoice = 0;
	adventureStarted = false;
	//
	xRChoice = 0;
	xRStarted = false;
	//
	rockChoice = 0;
	//
	diceChoice = 0;
	rerollChoice = 0;
	//
	clearChoice = 0;
	//
	interactChoice = 0;
	//
	guardianChoice = 0;
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

	

	switch (adventureChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		std::cout << "You decide to explore deeper into the forest. The journey is perilous...\n";
		xRoads();
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

void Game::xRoads()
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

	int xRChoice;
	std::cout << "Enter your Decision: ";
	std::cin >> xRChoice;
	std::cout << std::endl;

	xRStarted = true;

	switch (xRChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		std::cout << "You walk towards the Mighty Owl, as you get closer it looks at you and Chuckles\n";
		intelligenceChall(character.getRace());
		break;
	case 2:
		std::cout << "As you get closer to the rockface the task becomes more daunting and a wave of anxiety hits you\n";
		rockWalk();
		break;
	case 3:
		std::cout << "Walking closer, the Leprechaun sees you and sits on the fool waving what seems to be a cup\n";
		luckChall(character.getRace());
		break;
	default:
		std::cout << "Invalid choice. The people of the crossroad seem to stare at you awaiting your next move.\n";
		break;
	}
	
}
void Game::intelligenceChall(const std::string& playerRace)
{
	std::cout << "The Intelligence Challenge" << std::endl << std::endl;

	std::cout << "'Hello there " << playerRace << "'\n";
	std::cout << "'I am the might Owl that protects this path'\n";
	std::cout << "'To proceed down this path, you must answer my riddles'\n";
	std::cout << "'Show me your intelligence human'\n";
	std::cout << std::endl;

	std::cout << "'First Riddle: The more you take, the more you leave behind. What am I?'\n";
	std::cout << "The answer is ...";
	std::string playerAnswer1;
	std::cin >> playerAnswer1;
	

	if (playerAnswer1 == "footsteps" ||  "Footsteps") {
		std::cout << "'Correct! Well Done'\n";
		
		std::cout << "'Second Riddle: I always come, but never today. What am I?'\n";
		std::cout << "The answer is ...";
		std::string playerAnswer2;
		std::cin >> playerAnswer2;

		if (playerAnswer2 == "tomorrow" || "Tomorrow") {
			std::cout << "'Correct! Well Done, You have passed my trial go on from this path with my blessing'\n";
			std::cout << "The Owl spreads it's wings and beckons you onwards\n";
		}
		else {
			std::cout << "'Incorrect!'";
			std::cout << "The Owl pecks you due to your stupidity\n";
		}
	} else {
		std::cout << "'Incorrect!'";
		std::cout << "The Owl pecks you due to your stupidity\n";
	}

	
}

void Game::rockWalk()
{

	std::cout << "The Strength Challenge" << std::endl << std::endl;

	std::cout << "Welcome to the Path of Strength!\n";
	std::cout << "A massive rockface blocks your way.\n";
	std::cout << "A voice challenges you, 'Prove your strength.'\n\n";
	std::cout << "Choose your action:\n";
	std::cout << "0. Quit\n";
	std::cout << "1. Scale the rockface\n";
	std::cout << "2. Find a way around\n";

	int rockChoice;
	std::cout << "Enter your Decision: ";
	std::cin >> rockChoice;
	std::cout << std::endl;

	switch (rockChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		climbRock();
		break;
	case 2:
		findWayAround();
		break;
	default:
		std::cout << "Invalid choice. The rockface looms over at you in despair.\n";
		break;
	}
	
}
void Game::climbRock() {
	std::cout << "You start climbing the tree...\n";

	int randomNumber = std::rand() % 10 + 1;

	if (randomNumber > 2) {
		std::cout << "Congratulations! You successfully climbed the tree. Path unblocked!\n";
	}
	else {
		std::cout << "You couldn't hold on, losing your grip you fall to the beginning\n";
		rockWalk();
	}


	
}
void Game::findWayAround() 
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	std::cout << "You decide to look around the rockface for other ways to pass this challenge\n";

	int randomNumber = std::rand() % 10 + 1;

	if (randomNumber > 3) {
		std::cout << "You successfully find a small, hidden path in some bushes\n";
	}
	else {
		std::cout << "You didn't find anything, you walk back to where you started searching\n";
		rockWalk();
	}
	
}
void Game::luckChall(const std::string& playerRace)
{
	std::cout << "The Luck Challenge" << std::endl << std::endl;

	std::cout << "'Hello there " << playerRace << "'\n";
	std::cout << "'I am the Lucky Leprechaun'\n";
	std::cout << "'To proceed down this path, you must beat me in a game of luck!'\n";
	std::cout << "'Roll a number above 2 and you may pass'\n";
	std::cout << std::endl;

	std::cout << "Choose your action:\n";
	std::cout << "0. Quit\n";
	std::cout << "1. Roll the dice\n";

	int diceChoice;
	std::cout << "Enter your Decision: ";
	std::cin >> diceChoice;
	std::cout << std::endl;

	switch (diceChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		roll();
		break;
	default:
		std::cout << "Invalid choice. The Leprechaun giggles in anticipation.\n";
		break;
	}
	
}

void Game::roll() 
{
	int randomNumber = std::rand() % 6 + 2;

	std::cout << "You rolled a " << randomNumber << "." << std::endl;

	if (randomNumber > 2) {
		std::cout << "The Leprechaun sighs and moves aside letting you pass him\n";
		std::cout << "'A fluke!, its just a fluke  '";
		std::cout << "cries the Leprechaun as he slumps in his chair\n";
	}
	else {
		std::cout << "'HAHA, I knew it, you aren't lucky like me'\n";
		std::cout << "'I am the lucky Leprechaun and I never lose'\n";
		std::cout << "'Try Again, but don't expect a different outcome'\n";
		std::cout << "The Leprechaun sneers and dances in glee\n";
		

		
		std::cout << "Choose your action:\n";
		std::cout << "0. Quit\n";
		std::cout << "1. Reroll the dice\n";

		int ReRollChoice;
		std::cout << "Enter your Decision: ";
		std::cin >> ReRollChoice;
		std::cout << std::endl;

		switch (ReRollChoice)
		{
		case 0:
			playing = false;
			break;
		case 1:
			roll();
			break;
		default:
			std::cout << "Invalid choice. The Leprechaun giggles in anticipation.\n";
			break;
		}
	}
	
}
void Game::vastClearing() 
{
	std::cout << "A Large Clearing" << std::endl << std::endl;


	std::cout << "After completing the previous trial you find yourself in a vast clearing.\n";
	std::cout << "As you wander further into the clearing, a large Golden Ox approaches\n";
	std::cout << "The creature stays a distance, awaiting you to approach\n";
	std::cout << "As you look around you see a bench overlooking a lake that shimmers in the sunlight\n";
	std::cout << std::endl;

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Walk toward the Ox" << std::endl;
	std::cout << "2: Rest on the bench" << std::endl;
	std::cout << std::endl;



	int clearChoice;
	std::cout << "Enter your choice: ";
	std::cin >> clearChoice;
	std::cout << std::endl;


	switch (clearChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		interact();
		break;
	case 2:
		std::cout << "You choose to rest on the bench. The soothing energy rejuvenates your spirit.\n";
		vastClearing();
		break;
	default:
		std::cout << "Invalid choice. The Clearing is silent in wait of your decision\n";
		break;
	}
}
void Game::interact()
{
	std::cout << "You walk toward the Ox and it bows its head allowing you to place your hand on its horns\n";
	std::cout << "'Follow me' you hear in your head\n";
	std::cout << "You follow the beast and it leads you through a meadow, a valley and then to what looks to be a cave opening\n";

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Enter the Cave" << std::endl;
	std::cout << std::endl;



	int interactChoice;
	std::cout << "Enter your choice: ";
	std::cin >> interactChoice;
	std::cout << std::endl;


	switch (interactChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		enterCave();
		break;
	default:
		std::cout << "Invalid choice. The Ox awaits your next move.\n";
		break;
	}
}
void Game::enterCave()
{
	std::cout << "As you enter the cave the atmosphere changed dramatically\n";
	std::cout << "You see a large three headed dog asleep blocking a hole that exits the cave \n";
	std::cout << "'That is the guardian of this Forest' the Ox explains\n";
	std::cout << "'The Forest has been attacked but the guardian has not intervened' \n";
	std::cout << "'Please awaken the guardian and bring him back to how he once was'\n";
	std::cout << "The Ox slowly backs away making sure to be quiet so not to wake the gargantuan creature \n";

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Fight the Guardian" << std::endl;
	std::cout << "2: Talk to the Guardian" << std::endl;
	std::cout << std::endl;



	int guardianChoice;
	std::cout << "Enter your choice: ";
	std::cin >> guardianChoice;
	std::cout << std::endl;


	switch (guardianChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		guardianSpeech();
		break;
	default:
		std::cout << "Invalid choice. The Guardian's snores grow fainter.\n";
		break;
	}
}
void Game::guardianSpeech() 
{
	std::cout << "You walk towards the Guardian, it slowly raises its heads";
	std::cout << "As you get closer it begins to growl";
	std::cout << "The guardian stands up and prepares for a battle";
	guardianAttack();

}
void Game::guardianAttack()
{
	std::cout << "You stand in preparation for a battle ";
	std::cout << "As the guardian moves closer, it yelps in pain";
	std::cout << "As you move closer you see, a large spear eminating a purple miasma sticking out of the creature's body";
	std::cout << "You slowly scuffle your feet towards the beast, putting your hands up";
	std::cout << "The beast looks at you and growls";
	std::cout << "You start to stroke its fur to calm down the creature"; 
	std::cout << "Its growls become fainter realizing you aren't trying to hurt it";
	std::cout << "As you place your hand on the spear the guardian turns its heads in preparation of the pain";
	std::cout << "You ripn out the spear as fast as possible to prevent the creature from being in pain for any longer"; 
	std::cout << "The creatures body slumps to the floor instantaneously"; 
	std::cout << "";
}