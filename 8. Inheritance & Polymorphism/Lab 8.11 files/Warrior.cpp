#include "Warrior.h"

void Warrior::attack(Character &enemy) {
    if (isAlive() == true) {
        if (enemy.getType() == WARRIOR) {
            Warrior &opp = dynamic_cast<Warrior &>(enemy);
            if (opp.getAllegiance() == getAllegiance()) {
                cout << "Warrior " << getName() << " does not attack Warrior " << enemy.getName() << "." << endl;
                cout << "They share an allegiance with " << getAllegiance() << "." << endl;
            }
            else {
                cout << "Warrior " << getName() << " attacks " << enemy.getName() << " --- SLASH!!" << endl;
                cout << enemy.getName() << " takes " << attackStrength * (health / MAX_HEALTH) << " damage." << endl;
                enemy.damage(attackStrength * (health / MAX_HEALTH));
            }
        }
        else {
            cout << "Warrior " << getName() << " attacks " << enemy.getName() << " --- SLASH!!" << endl;
            cout << enemy.getName() << " takes " << attackStrength * (health / MAX_HEALTH) << " damage." << endl;
            enemy.damage(attackStrength * (health / MAX_HEALTH));
        }
    }
    else {
        cout << "Warrior " << getName() << " is dead and cannot attack." << endl;
    }
}

string Warrior::getAllegiance() const {
    return allegiance;
}
