#include "Wizard.h"

void Wizard::attack(Character &enemy) {
    if (isAlive() == true) {
        if (enemy.getType() == WIZARD) {
            Wizard &opp = dynamic_cast<Wizard &>(enemy);
            cout << "Wizard " << getName() << " attacks " << enemy.getName() << " --- POOF!!" << endl;
            cout << enemy.getName() << " takes " << attackStrength * (static_cast<double>(getRank()) / opp.getRank()) << " damage." << endl;
            enemy.damage(attackStrength * (static_cast<double>(getRank()) / opp.getRank()));
        }
        else {
            cout << "Wizard " << getName() << " attacks " << enemy.getName() << " --- POOF!!" << endl;
            cout << enemy.getName() << " takes " << attackStrength << " damage." << endl;
            enemy.damage(attackStrength);
        }
    }
    else {
        cout << "Wizard " << getName() << " is dead and cannot attack." << endl;
    }
}

int Wizard::getRank() const {
    return rank;
}