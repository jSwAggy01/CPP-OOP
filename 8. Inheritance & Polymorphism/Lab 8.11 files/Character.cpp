#include "Character.h"

Character::Character(HeroType _type, const string &_name, double _health, double _attack) {
    type = _type;
    name = _name;
    health = _health;
    attackStrength = _attack;
}

HeroType Character::getType() const {
    return type;
}

const string & Character::getName() const {
    return name;
}

/* Returns the whole number of the health value (static_cast to int). */
int Character::getHealth() const {
    return static_cast<int>(health);
}

/* Reduces health value by amount passed in. */
void Character::damage(double dmg) {
    health -= dmg;
}

/* Returns true if getHealth() returns an integer greater than 0, otherwise false */
bool Character::isAlive() const {
    if (health > 0) {
        return true;
    }
    return false;
}

void Character::attack(Character &enemy) {
    enemy.damage(attackStrength);
}