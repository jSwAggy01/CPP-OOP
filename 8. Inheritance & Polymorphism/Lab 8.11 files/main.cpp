#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// Compile with: g++ main.cpp Warrior.cpp Character.cpp Wizard.cpp Elf.cpp -Wall -Werror -Wuninitialized -o ./a.exe


#include "Character.h"
#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

int main() {

	cout << "Beginning tests...\n" << endl;

	cout << "Testing character, warrior, elf class" << endl;

	{
		cout << "\nSummoning Dragonborn" << endl;
		Warrior w1("Dragonborn", 100, 10, "Jarl Ulfric");
		cout << "Summoning stormcloak" << endl;
		Warrior w2("Ralof", 80, 10, "Jarl Ulfric");
		w1.attack(w2);
		cout << endl;
		cout << "Summoning Imperial" << endl;
		Warrior w3("Hadvar", 15, 6, "General Tullius");
		w1.attack(w3);
		cout << endl;
		w2.attack(w3);
		cout << endl;
		if (w3.isAlive() == false) {
			cout << "Warrior Hadvar has been slain." << endl;
		}
		else {
			cout << "Warrior Hadvar is still alive." << endl;
		}
		cout << endl;
		cout << "Summoning altmer" << endl;
		Elf e1("Rulindil", 20, 20, "Thalmor");
		cout << "Summoning bosmer" << endl;
		Elf e2("Faendal", 5, 20, "Thalmor");
		e1.attack(e2);
		cout << endl;
		e1.attack(w1);
		cout << endl;
		e1.attack(w2);
		cout << endl;
		if (w2.isAlive() == false) {
			cout << "Warrior Ralof has been slain." << endl;
		}
		else {
			cout << "Warrior Ralof is still alive." << endl;
		}
		cout << endl;
		w1.attack(e1);
		cout << endl;
		e1.attack(w1);
		cout << endl;
		w1.attack(e1);
		cout << endl;
		if (w3.isAlive() == false) {
			cout << "Elf Rulindil has been slain." << endl;
		}
		else {
			cout << "Elf Rulindil is still alive." << endl;
		}
		cout << endl;
		cout << "Summoning mage" << endl;
		Wizard m1("Tolfdir", 15, 80, 10);
		cout << "Summoning altmer" << endl;
		Wizard m2("Ancano", 20, 50, 2);
		m2.attack(m1);
		cout << endl;
		m1.attack(m2);
		cout << endl;
		if (m2.isAlive() == false) {
			cout << "Wizard Ancano has been disintegrated." << endl;
		}
		else {
			cout << "Wizard Ancano is still alive." << endl;
		}
		cout << endl;
		m1.attack(w2);
		cout << endl;
		if (w2.isAlive() == false) {
			cout << "Warrior Ralof has been slain." << endl;
		}
		else {
			cout << "Warrior Ralof is still alive." << endl;
		}
		cout << endl;
		w1.attack(m1);
		cout << endl;
		m1.attack(w1);
		cout << endl;
		if (w1.isAlive() == false) {
			cout << "Warrior Dragonborn has been slain." << endl;
		}
		else {
			cout << "Warrior Dragonborn is still alive." << endl;
		}
		cout << endl;
		w1.attack(m1);
		cout << endl;
		if (m1.isAlive() == false) {
			cout << "Wizard Tolfdir has been defeated." << endl;
		}
		else {
			cout << "Wizard Tolfdir is still alive." << endl;
		}
	}

	// Compile with: g++ main.cpp Warrior.cpp Character.cpp Wizard.cpp Elf.cpp -Wall -Werror -Wuninitialized -o ./a.exe
	
	int seed;
	cout << "Enter seed value: ";
	cin >> seed;
	cout << endl;
	
	srand(seed);

	vector<Character *> adventurers;
	adventurers.push_back(new Warrior("Arthur", 100, 5, "King George"));
	adventurers.push_back(new Warrior("Jane", 100, 6, "King George"));
	adventurers.push_back(new Warrior("Bob", 100, 4, "Queen Emily"));
	adventurers.push_back(new Elf("Raegron", 100, 4, "Sylvarian"));
	adventurers.push_back(new Elf("Cereasstar", 100, 3, "Sylvarian"));
	adventurers.push_back(new Elf("Melimion", 100, 4, "Valinorian"));
	adventurers.push_back(new Wizard("Merlin", 100, 5, 10));
	adventurers.push_back(new Wizard("Adali", 100, 5, 8));
	adventurers.push_back(new Wizard("Vrydore", 100, 4, 6));

	unsigned numAttacks = 10 + rand() % 11;
	unsigned attacker, defender;
	for (unsigned i = 0; i < numAttacks; ++i) {
		attacker = rand() % adventurers.size();
		do {
			defender = rand() % adventurers.size();
		} while (defender == attacker);
		
		adventurers.at(attacker)->attack(*adventurers.at(defender));
		cout << endl;
	}
	cout << "-----Health Remaining-----" << endl;
	for (unsigned i = 0; i < adventurers.size(); ++i) {
		cout << adventurers.at(i)->getName() << ": " 
			<< adventurers.at(i)->getHealth() << endl;
	}

	return 0;
}