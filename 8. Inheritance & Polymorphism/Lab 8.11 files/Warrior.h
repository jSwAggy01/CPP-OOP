#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include "Character.h"

using namespace std;

class Warrior : public Character {
    private:
        string allegiance;
    public:
        Warrior(const string &name, double health, double attackStrength, const string &allegiance) : 
            Character(WARRIOR, name, health, attackStrength), 
            allegiance(allegiance) 
        {};
        void attack(Character &enemy) override;
        string getAllegiance() const;
};

#endif