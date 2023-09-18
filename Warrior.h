/*********************
* Kyle Keener        *
* Text Adventure 1   *
* 11/12/2018         *
*********************/
#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
using namespace std;

class Warrior {
private:
	string warriorName;				// Player inputs warrior name
	int warriorHealth = 150;		// Warrior health by default is 150
	string warriorWeapon;			// Weapon will be chosen before beginning
	int weaponSpeed;				// Weapon speed is on a scale from 1-3 (1 fastest, 3 slowest)
	int weaponDamage;				// Weapon damage will be multiples of 5 (be sure to balance speed with power)
	int weaponRange;				// Warrior weapons usually have range of 1 or 2
public:
	// Constructors
	Warrior();
	Warrior(string warriorName);
	Warrior(string warriorName, int warriorHealth);
	Warrior(string warriorName, int warriorHealth, string warriorWeapon);
	Warrior(int weaponSpeed);
	Warrior(int weaponSpeed, int weaponDamage);
	Warrior(int weaponSpeed, int weaponDamage, int weaponRange);

	// Mutators
	void setWarriorName(string warriorName);
	void setWarriorHealth(int warriorHealth);
	void setWarriorWeapon(string warriorWeapon);
	void setWeaponSpeed(int weaponSpeed);
	void setWeaponDamage(int weaponDamage);
	void setWeaponRange(int weaponRange);

	// Accessors
	string getWarriorName();
	int getWarriorHealth();
	string getWarriorWeapon();
	int getWeaponSpeed();
	int getWeaponDamage();
	int getWeaponRange();

	// Destuctors
	~Warrior();

};


#endif WARRIOR_H