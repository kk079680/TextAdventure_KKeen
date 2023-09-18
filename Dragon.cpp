#include "Dragon.h";
#include <iostream>;
using namespace std;

//Default Constructor
Dragon::Dragon() {
	double dragonHealth = 300;	//Dragon's total health
};

// Constructors
Dragon::Dragon(double dragonHealth) {
	this->dragonHealth = dragonHealth;
	setDragonHealth(this->dragonHealth = dragonHealth);
}

// Mutator
void Dragon::setDragonHealth(double dragonHealth) {
	this->dragonHealth = dragonHealth;
	setDragonHealth(this->dragonHealth = dragonHealth);
}

// Accessor
double Dragon::getDragonHealth(double dragonHealth) {
	return dragonHealth;
}

double Dragon::dealTailDamage(int tailDamage, int tailRange, int tailCharge) {
	return tailDamage;

}

double Dragon::dealClawDamage(int clawDamage, int clawRange, int clawCharge) {
	return clawDamage;
}

double Dragon::dealFireDamage(int fireDamage, int fireRange, int fireCharge) {
	return fireDamage;
}