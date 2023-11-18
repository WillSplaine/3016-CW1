#pragma once



#include<ctime>
#include"Character.h"
#include"Functions.h"

class Game
{
public:
	Game();
	virtual ~Game();

	//Functions
	 //Game Start//
	void initGame();
	void mainMenu();
	//Start of Adventure
	void beginAdventure();
	//Player Chooses a path - Scene 1
	void xRoads();
	//Path 1
	void intelligenceChall(const std::string& playerRace);
	//Path 2
	void climbRock();
	void rockWalk();
	void findWayAround();
	//Path 3
	void luckChall(const std::string& playerRace);
	void roll();

	//Scene 2 
	void vastClearing();
	void interact();
	void enterCave();
	void guardianSpeech();
	void guardianAttack();
	void pullSpear();
	void healGuardian();
	void waitGuardian();
	void awaken();
	void leaveCave();
	//Accessors
	inline bool getPlaying() const { return this->playing; }
	inline bool getStarting() const { return this->adventureStarted; }
	//Modifiers 

 private:
	 //Game Start//
	int choice;
	bool playing;
	//Start of Adventure
	int adventureChoice;
	bool adventureStarted;
	//Player Chooses a path
	int xRChoice;
	bool xRStarted;
	//Path 2
	int rockChoice;
	//Path 3
	int diceChoice;
	int rerollChoice;
	//
	//Scene 1 - Scene 2 
	int clearingContinue;
	//Scene 2 
	int clearChoice;
	int interactChoice;
	int guardianChoice;
	int spearChoice;
	int healChoice;
	int guardianContinue;
	int caveExit;
	//Character 
	Character character;



};

