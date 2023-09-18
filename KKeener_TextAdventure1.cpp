#include <iostream>
#include <string>
#include <vector>
#include "Warrior.h"
#include "Dragon.h"
using namespace std;

bool cave(Warrior, Dragon);
void boardInitialize(int);	//Initializes playing field

int main() {

	Dragon dragon;
	Warrior warrior;
	string name;
	string weapon;
	string direction;
	char confirm = 'y';
	bool victory;

	int movement[3][3];
	vector<int> spaces;


	cout << "Welcome adventurer!  The dragon awaits your challenge! \n";
	cout << "In order to save the land and become the hero of Textus, you must venture forth, and defeat the dragon!" << endl << endl;
	cout << "What is your name, adventurer?" << endl;
	cout << ">";
	getline(cin, name);
	warrior.setWarriorName(name);
	warrior.setWarriorHealth(150);
	cout << "\nGreetings " << warrior.getWarriorName() << " the warrior! You have 150 points of health." << endl <<"  Once your health reaches zero ";
	cout << "you will have been defeated, and will have to begin your adventure over again." << endl << endl;
	std::system("pause");
	cout << "Sounds a lot like King's Quest, doesn't it?  Well, yes.  Except we've no artisans. Therefore, we're relegated to reading our story." << endl << endl;
	std::system("pause");
	cout << "I apologize in advance for the lack of pictures.  You young adventurers love your pictures." << endl << endl;
	std::system("pause");
	cout << "Seems Shakespeare was right.  Young men doth love with their eyes..." << endl << endl;
	std::system("pause");
	cout << "Anyway, proceed to the armory and procure a weapon.  Understand that every weapon has their advantages and disadvantages." << endl << endl;
	std::system("pause");

	do {
		cout << "You may chose between a sword, a spear, an axe, a hammer, and a dagger.\n";
		cout << "Which do you chose?" << endl;
		cout << ">";
		getline(cin, weapon);
		warrior.setWarriorWeapon(weapon);
		cout << "A " << warrior.getWarriorWeapon() << "? A wise decision!" << endl;
		std::system("pause");
		cout << "The " << warrior.getWarriorWeapon() << " deals " << warrior.getWeaponDamage() << " every " << warrior.getWeaponSpeed() << " Turns.  And you must be " << warrior.getWeaponRange() << " spaces away to deal damage." << endl << endl;
		cout << "Would you like a different weapon Y/N?" << endl;
		cout << ">";
		cin >> confirm;
		if (confirm == 'y' || confirm == 'Y') {
			cout << "Try a different weapon." << endl << endl;
			cin.ignore();
		}
		else {
			break;
		}
	} while (confirm == 'y' || confirm == 'Y');

	cout << "Now, venture forth!  And God be with you!" << endl << endl;

	do {
		cout << "You enter the darkness of the great dragon's cave.  A dark, stone hallway lies before you.  Shall you proceed?" << endl;
		cout << ">";
		getline(cin, direction);
		if (direction == "proceed") {
			cave(warrior, dragon, confirm);
		}
		else {
			cout << "You cower in fear from the dark, dingy corridor of rock housing their terrors within.  Thus, you did not slay the dragon and have given up.  Try again Y/N?" << endl;
			cout << ">";
			cin >> confirm;
			if (confirm == 'y') {
				cin.ignore();
				cout << "Once more then." << endl << endl;
			}
			else {
				cout << "Safe travels then.  Perhaps you will be victorious another day." << endl;

				std::system("pause");
				return 0;
			}
		}
	} while (confirm == 'y' || victory == 0);

	std::system("pause");
	return 0;
}

bool cave(Warrior warrior, Dragon dragon, int confirm) {

	int action;

	cout << "You venture on ever downward, the light growing dimmer around you." << endl << endl;
	std::system("pause");
	cout << "Until suddenly, you enter a vast chamber with a great, shimmering light venting in from a hole in the chamber ceiling." << endl << endl;
	std::system("pause");
	cout << "Stalactites hang overhead as a mighty red dragon sits upon a mountain of gold and jewels." << endl << endl;
	std::system("pause");
	cout << "The dragon lets out a ferocious roar.  It is distrubed by your presence and wishes to do battle!" << endl << endl;
	cout << "Do you wish to do battle with the ferocious, mighty dragon Y/N?" << endl;
	cout << ">";
	do {
		cin >> confirm;
		if (confirm == 'y' || confirm == 'Y') {
			cin.ignore();
			cout << "Have at it then!" << endl << endl;
			break;
		}
		else {
			cout << "Your nerves rush up from within you as the dragon was far larger than what the fables described." << endl << endl;
			cout << "You quickly turn and run for the exit in fear.  Perhaps courage will be on your side another day." << endl << endl;
			return 0;
		}
	} while (confirm == 'y' || confirm == 'Y');


	std::system("pause");
	return 0;
}