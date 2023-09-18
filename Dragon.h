#ifndef DRAGON_H
#define DRAGON_H

class Dragon {

private:
	double dragonHealth = 300;	//Dragon has twice as much health as the warrior
							//The player can move on a 3x3 space plane with a vertical range from 1 to 3 spaces
	
	int tailDamage = 10;	//Damage dealt is in multiples of 10 to make math easy
	int tailRange = 2;		//Attacks take turns to recharge, as well as a range from 1 to 3
	int tailCharge = 2;		//Tail attack takes 2 turns to recharge

	int clawDamage = 20;
	int clawRange = 1;
	int clawCharge = 1;

	int fireDamage = 30;
	int fireRange = 3;
	int fireCharge = 3;
public:
	// Constructors
	Dragon();
	Dragon(double dragonHealth);

	//Mutators
	void setDragonHealth(double dragonHealth);	// Only thing that changes about the dragon is position and health

	//Accessors
	double getDragonHealth(double dragonHealth);
	double dealTailDamage(int tailDamage, int tailRange, int tailCharge);
	double dealClawDamage(int clawDamage, int clawRange, int clawCharge);
	double dealFireDamage(int fireDamage, int fireRange, int fireCharge);
};


#endif