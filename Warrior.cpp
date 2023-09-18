#include "Warrior.h"
#include <iostream>
using namespace std;

// Default Constructor
Warrior::Warrior() {
	warriorName = "";
	warriorHealth = 150;
	warriorWeapon = "";
	weaponSpeed = 0;
	weaponDamage = 0;
	weaponRange = 0;
}

// Constructors
Warrior::Warrior(string warriorName) {
	this->warriorName = warriorName;
}

Warrior::Warrior(string warriorName, int warriorHealth) {
	this->warriorName = warriorName;
	setWarriorHealth(this->warriorHealth = warriorHealth);
}

Warrior::Warrior(string warriorName, int warriorHealth, string warriorWeapon) {
	this->warriorName = warriorName;
	setWarriorHealth(this->warriorHealth = warriorHealth);
	setWarriorWeapon(this->warriorWeapon = warriorWeapon);
}

Warrior::Warrior(int weaponSpeed) {
	setWeaponSpeed(this->weaponSpeed = weaponSpeed);
}

Warrior::Warrior(int weaponSpeed, int weaponDamage) {
	setWeaponDamage(this->weaponDamage = weaponDamage);
}

Warrior::Warrior(int weaponSpeed, int weaponDamage, int weaponRange) {
	setWeaponRange(this->weaponRange = weaponRange);
}

// Mutators
void Warrior::setWarriorName(string warriorName) {
	this->warriorName = warriorName;
}

void Warrior::setWarriorHealth(int warriorHealth) {
	this->warriorHealth = warriorHealth;
}

void Warrior::setWarriorWeapon(string warriorWeapon) {
	this->warriorWeapon = warriorWeapon;

	if (warriorWeapon == "Sword" || warriorWeapon == "sword") {
		setWeaponDamage(25);
		setWeaponSpeed(2);
		setWeaponRange(1);
	}
	else if (warriorWeapon == "Spear" || warriorWeapon == "spear") {
		setWeaponDamage(20);
		setWeaponSpeed(2);
		setWeaponRange(2);
	}
	else if (warriorWeapon == "Axe" || warriorWeapon == "axe") {
		setWeaponDamage(30);
		setWeaponSpeed(3);
		setWeaponRange(1);
	}
	else if (warriorWeapon == "Hammer" || warriorWeapon == "hammer") {
		setWeaponDamage(35);
		setWeaponSpeed(3);
		setWeaponRange(1);
	}
	else if (warriorWeapon == "Dagger" || warriorWeapon == "dagger") {
		setWeaponDamage(15);
		setWeaponSpeed(1);
		setWeaponRange(1);
	}
	else {
		setWarriorWeapon("Sword");
	}
}

void Warrior::setWeaponDamage(int weaponDamage) {
	this->weaponDamage = weaponDamage;
}

void Warrior::setWeaponSpeed(int weaponSpeed) {
	this->weaponSpeed = weaponSpeed;
}

void Warrior::setWeaponRange(int weaponRange) {
	this->weaponRange = weaponRange;
}

// Accessors
string Warrior::getWarriorName() {
	return warriorName;
}

int Warrior::getWarriorHealth() {
	return warriorHealth;
}

string Warrior::getWarriorWeapon() {
	return warriorWeapon;
}

int Warrior::getWeaponDamage() {
	return weaponDamage;
}

int Warrior::getWeaponRange() {
	return weaponRange;
}

int Warrior::getWeaponSpeed() {
	return weaponSpeed;
}

// Destructor
Warrior::~Warrior() {

}