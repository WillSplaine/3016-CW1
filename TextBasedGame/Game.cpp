#include "Game.h"
#include <limits>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> printSpecificLines(const std::string& fileName, int startLine, int endLine) {
	std::vector<std::string> printTheseLines;

	std::ifstream inputFile(fileName);

	if (!inputFile.is_open()) {
		std::cerr << "Error opening the file: " << fileName << std::endl;
		return printTheseLines;
	}

	std::string line;
	int currentLineNumber = 1;

	while (std::getline(inputFile, line) && currentLineNumber <= endLine) {
		if (currentLineNumber >= startLine && currentLineNumber <= endLine) {
			printTheseLines.push_back(line);
		}

		++currentLineNumber;
	}

	inputFile.close();
	return printTheseLines;
}

void readText(const std::vector<std::string>& lines) {
	// Perform any processing on the loaded lines
	for (const auto& printedLine : lines) {
		std::cout << printedLine << std::endl;
	}
}


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
	clearingContinue = 0;
	//
	clearChoice = 0;
	//
	interactChoice = 0;
	//
	guardianChoice = 0;
	//
	spearChoice = 0;
	//
	healChoice = 0;
	//
	guardianContinue = 0;
	//
	caveExit = 0;
	//
	finalWordsChoice = 0;
	//
	gameEnd = 0;
}


Game::~Game()
{

}


//Functions



void Game::initGame()
{
	std::string name;
	std::string fileName = "Storyline.txt";
	std::vector<std::string> lines1To1 = printSpecificLines(fileName, 1, 1);
	readText(lines1To1);
	getline(std::cin, name);

	std::string race;
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines2To2 = printSpecificLines(fileNames, 2, 2);
	readText(lines2To2);
	getline(std::cin, race);
	character.initialize(name,race);

}

void Game::mainMenu()
{

	std::string fileName = "Storyline.txt";
	std::vector<std::string> lines4To10 = printSpecificLines(fileName, 4, 10);
	readText(lines4To10);
	
	std::cin >> choice;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << std::endl;



	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		beginAdventure();
		break;
	case 2:
		system("CLS");
		character.printStats();

		break;
	
	default:
		std::string fileNames = "Storyline.txt";
		std::vector<std::string> lines11To11 = printSpecificLines(fileNames, 11, 11);
		readText(lines11To11);
		std::cout << "Invalid choice. Please read through the options and try again\n";
		break;
	}
	
	
}
void Game::beginAdventure()
{

	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines13To24 = printSpecificLines(fileNames, 13, 24);
	readText(lines13To24);

	int adventureChoice;
	std::cin >> adventureChoice;
	std::cout << std::endl;

	switch (adventureChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		xRoads();
		break;
	case 2:
		system("CLS");
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
	std::string fileName = "Storyline.txt";
	std::vector<std::string> lines29To42 = printSpecificLines(fileName, 29, 42);
	readText(lines29To42);
	
	int xRChoice;
	std::cin >> xRChoice;
	std::cout << std::endl;

	xRStarted = true;

	switch (xRChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		std::cout << "You walk towards the Mighty Owl, as you get closer it looks at you and Chuckles\n";
		intelligenceChall(character.getRace());
		break;
	case 2:
		system("CLS");
		std::cout << "As you get closer to the rockface the task becomes more daunting and a wave of anxiety hits you\n";
		rockWalk();
		break;
	case 3:
		system("CLS");
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

	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines45To45 = printSpecificLines(fileNames, 45, 45);
	readText(lines45To45);

	std::cout << "'Hello there " << playerRace << "'\n";
	std::string fileName = "Storyline.txt";
	std::vector<std::string> lines48To54 = printSpecificLines(fileName, 48, 54);
	readText(lines48To54);

	std::string playerAnswer1;
	std::cin >> playerAnswer1;
	

	if (playerAnswer1 == "footsteps" || playerAnswer1 == "Footsteps") {
		std::string fileName = "Storyline.txt";
		std::vector<std::string> lines56To59 = printSpecificLines(fileName, 56, 59);
		readText(lines56To59); 
		
		std::string playerAnswer2;
		std::cin >> playerAnswer2;

		if (playerAnswer2 == "tomorrow" || playerAnswer2 == "Tomorrow") {
			std::string fileNamez = "Storyline.txt";
			std::vector<std::string> lines61To67 = printSpecificLines(fileNamez, 61, 67);
			readText(lines61To67);

			int clearingContinue;
			std::cin >> clearingContinue;
			std::cout << std::endl;
			switch (clearingContinue)
			{
			case 0:
				playing = false;
				break;
			case 1:
				system("CLS");
				vastClearing();
				break;
			default:
				std::cout << "Invalid choice. You should continue on.\n";
				break;
			}

		}
		else {
			std::string fileName1 = "Storyline.txt";
			std::vector<std::string> lines71To72 = printSpecificLines(fileName1, 71, 72);
			readText(lines71To72);

			std::cout << "You Died";
		}
	} else {
		std::string fileName2 = "Storyline.txt";
		std::vector<std::string> lines71To72 = printSpecificLines(fileName2, 71, 72);
		readText(lines71To72);

		std::cout << "You Died";
	}

	
}

void Game::rockWalk()
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines74To84 = printSpecificLines(fileNames, 74, 84);
	readText(lines74To84);

	int rockChoice;
	std::cin >> rockChoice;
	std::cout << std::endl;

	switch (rockChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		climbRock();
		break;
	case 2:
		system("CLS");
		findWayAround();
		break;
	default:
		std::cout << "Invalid choice. The rockface looms over at you in despair.\n";
		break;
	}
	
}
void Game::climbRock() {
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines87To87 = printSpecificLines(fileNames, 87, 87);
	readText(lines87To87);

	int randomNumber = std::rand() % 10 + 1;

	if (randomNumber > 2) {

		std::string fileName = "Storyline.txt";
		std::vector<std::string> lines88To93 = printSpecificLines(fileName, 88, 93);
		readText(lines88To93);
		

		int clearingContinue;
		std::cin >> clearingContinue;
		std::cout << std::endl;
		switch (clearingContinue)
		{
		case 0:
			playing = false;
			break;
		case 1:
			system("CLS");
			vastClearing();
			break;
		default:
			std::cout << "Invalid choice. You should continue on.\n";
			break;
		}
	}
	else {
		std::string fileNamez = "Storyline.txt";
		std::vector<std::string> lines97To97 = printSpecificLines(fileNamez, 97, 97);
		readText(lines97To97);
		rockWalk();
	}


	
}
void Game::findWayAround() 
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	std::string fileName = "Storyline.txt";
	std::vector<std::string> lines100To100 = printSpecificLines(fileName, 100, 100);
	readText(lines100To100);

	int randomNumber = std::rand() % 10 + 1;

	if (randomNumber > 3) {
		std::string fileNames = "Storyline.txt";
		std::vector<std::string> lines102To105 = printSpecificLines(fileNames, 102, 105);
		readText(lines102To105);

		int clearingContinue; 
		std::cin >> clearingContinue;
		std::cout << std::endl;
		switch (clearingContinue)
		{
		case 0:
			playing = false;
			break;
		case 1:
			system("CLS");
			vastClearing();
			break;
		default:
			std::cout << "Invalid choice. You should continue on.\n";
			break;
		}
	}
	else {
		std::string fileNamez = "Storyline.txt";
		std::vector<std::string> lines110To110 = printSpecificLines(fileNamez, 110, 110);
		readText(lines110To110);

		rockWalk();
	}
	
}
void Game::luckChall(const std::string& playerRace)
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines112To123 = printSpecificLines(fileNames, 112, 123);
	readText(lines112To123);

	int diceChoice;
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
		std::string fileNames = "Storyline.txt";
		std::vector<std::string> lines129To135 = printSpecificLines(fileNames, 129, 135);
		readText(lines129To135);

		int clearingContinue; 
		std::cin >> clearingContinue;
		std::cout << std::endl;
		switch (clearingContinue)
		{
		case 0:
			playing = false;
			break;
		case 1:
			system("CLS");
			vastClearing();
			break;
		default:
			std::cout << "Invalid choice. You should continue on.\n";
			break;
		}


	}
	else {
		std::string fileName = "Storyline.txt";
		std::vector<std::string> lines137To145 = printSpecificLines(fileName, 137, 145);
		readText(lines137To145);

		int ReRollChoice;
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
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines147To159 = printSpecificLines(fileNames, 147, 159);
	readText(lines147To159);

	int clearChoice;
	std::cin >> clearChoice;
	std::cout << std::endl;


	switch (clearChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		interact();
		break;
	case 2:
		system("CLS");
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

	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines164To171 = printSpecificLines(fileNames, 164, 171);
	readText(lines164To171);

	int interactChoice;
	std::cin >> interactChoice;
	std::cout << std::endl;


	switch (interactChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		enterCave();
		break;
	default:
		std::cout << "Invalid choice. The Ox awaits your next move.\n";
		break;
	}
}
void Game::enterCave()
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines175To186 = printSpecificLines(fileNames, 175, 186);
	readText(lines175To186);

	int guardianChoice;
	std::cin >> guardianChoice;
	std::cout << std::endl;


	switch (guardianChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		guardianSpeech();
		break;
	default:
		std::cout << "Invalid choice. The Guardian's snores grow fainter.\n";
		break;
	}
}
void Game::guardianSpeech() 
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines190To192 = printSpecificLines(fileNames, 190, 192);
	readText(lines190To192);
	guardianAttack();

}
void Game::guardianAttack()
{
	system("CLS");
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines195To206 = printSpecificLines(fileNames, 195, 206);
	readText(lines195To206);

	int spearChoice; 
	std::cin >> spearChoice;
	std::cout << std::endl;
	switch (spearChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		pullSpear();
		break;
	default:
		std::cout << "Invalid choice. The Guardian turns one of its heads to look at you in anticipation.\n";
		break;
	}
}

void Game::pullSpear()
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines209To218 = printSpecificLines(fileNames, 209, 218);
	readText(lines209To218);

		int spearChoice;
		std::cin >> spearChoice;
		std::cout << std::endl;
		switch (spearChoice)
		{
		case 0:
			playing = false;
			break;
		case 1:
			system("CLS");
			healGuardian();
			break;
		case 2:
			system("CLS");
			waitGuardian();
			break;
		default:
			std::cout << "Invalid choice. The Guardian turns one of its heads to look at you in anticipation.\n";
			break;
		}
}
void Game::healGuardian()
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines222To233 = printSpecificLines(fileNames, 222, 233);
	readText(lines222To233);

	int guardianContinue; 
	std::cin >> guardianContinue;
	std::cout << std::endl;
	switch (guardianContinue)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		awaken();
		break;
	default:
		std::cout << "Invalid choice. The Guardian remains unconcious.\n";
		break;
	}
}
void Game::waitGuardian()
{

	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines235To241 = printSpecificLines(fileNames, 235, 241);
	readText(lines235To241);

	int guardianContinue; 
	std::cin >> guardianContinue;
	std::cout << std::endl;
	switch (guardianContinue)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		awaken();
		break;
	default:
		std::cout << "Invalid choice. The Guardian remains unconcious.\n";
		break;
	}

}
void Game::awaken() 
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines245To253 = printSpecificLines(fileNames, 245, 253);
	readText(lines245To253);

	int caveExit;
	std::cin >> caveExit;
	std::cout << std::endl;
	switch (caveExit)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		leaveCave();
		break;
	default:
		std::cout << "Invalid choice. The Guardian remains by your side.\n";
		break;
	}
}
void Game::leaveCave() 
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines257To265 = printSpecificLines(fileNames, 257, 265);
	readText(lines257To265);

	int finalWordsChoice;
	
	std::cin >> finalWordsChoice;
	;
	std::cout << std::endl;
	switch (finalWordsChoice)
	{
	case 0:
		playing = false;
		break;
	case 1:
		system("CLS");
		finalWords(character.getRace());
		break;
	default:
		std::cout << "Invalid choice. The lake seems peaceful\n";
		break;
	}
}
void Game::finalWords(const std::string& playerRace)
{
	std::string fileNames = "Storyline.txt";
	std::vector<std::string> lines269To269 = printSpecificLines(fileNames, 269, 269);
	readText(lines269To269); 
	std::cout << "The Ox bows 'Thank you " << playerRace << " , you have restored peace to the forest";

	std::string fileName = "Storyline.txt";
	std::vector<std::string> lines272To282 = printSpecificLines(fileName, 272, 282);
	readText(lines272To282);


	int gameEnd;
	
	std::cin >> gameEnd;
	std::cout << std::endl;
	switch (gameEnd)
	{
	case 0:
		playing = false;
		break;
	default:
		std::cout << "Invalid choice. The Game has ended :( .\n";
		break;
	}
}