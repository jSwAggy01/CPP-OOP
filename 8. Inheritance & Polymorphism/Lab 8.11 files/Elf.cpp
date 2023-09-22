#include "Elf.h"

void Elf::attack(Character &enemy) {
    if (isAlive() == true) {
        if (enemy.getType() == ELF) {
            Elf &opp = dynamic_cast<Elf &>(enemy);
            if (opp.getFamilyName() == getFamilyName()) {
                cout << "Elf " << getName() << " does not attack Elf " << enemy.getName() << "." << endl;
                cout << "They are both members of the " << getFamilyName() << " family." << endl;
            }
            else {
                cout << "Elf " << getName() << " shoots an arrow at " << enemy.getName() << " --- TWANG!!" << endl;
                cout << enemy.getName() << " takes " << attackStrength * (health / MAX_HEALTH) << " damage." << endl;
                enemy.damage(attackStrength * (health / MAX_HEALTH));
            }
        }
        else {
            cout << "Elf " << getName() << " shoots an arrow at " << enemy.getName() << " --- TWANG!!" << endl;
            cout << enemy.getName() << " takes " << attackStrength * (health / MAX_HEALTH) << " damage." << endl;
            enemy.damage(attackStrength * (health / MAX_HEALTH));
        }
    }
    else {
        cout << "Elf " << getName() << " is dead and cannot attack." << endl;
    }
}

string Elf::getFamilyName() const {
    return familyName;
}
