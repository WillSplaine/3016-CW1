#pragma once

#include<iostream>
#include<string>
#include<iomanip>

class Character
{
public:
	Character();
	virtual ~Character();

	//Functions

	void initialize(const std::string name, const std::string race);
	void printStats() const;
	void levelUp();

	//Accessors
	inline const double& getY() const { return this->yPos; }
	inline const double& getX() const { return this->xPos; }
	inline const int& getLevel() const { return this->level; }
	inline const std::string& getRace() const { return this->race; }
	inline const std::string& getName() const { return this->name; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }
	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getStaminaMax() const { return this->staminaMax; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefence() const { return this->defence; }

	//Modifiers


private:
	double xPos;
	double yPos;

	std::string race;
	std::string name;
	int level;
	int exp;
	int expNext;
	
	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defence;
	int luck;


	int statPoints;
	int skillPoints;


};

