#pragma once



#include<ctime>
#include"Character.h"
#include"Functions.h"




class Game
{
public:
	Game();
	virtual ~Game();

	//Operators


	//Functions
	void initGame();
	void mainMenu();
	void beginAdventure();
	void XRoads();
	void IntelligenceChall();
	

	//Accessors
	inline bool getPlaying() const { return this->playing; }
	inline bool getStarting() const { return this->adventureStarted; }
	//Modifiers 

 private:
	int choice;
	bool playing;
	int adventureChoice;
	bool adventureStarted;
	int XRChoice;
	bool XRStarted;

	//Character 
	Character character;



};

