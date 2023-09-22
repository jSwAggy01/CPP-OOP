#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include "Character.h"

using namespace std;

class Wizard : public Character {
    private:
        int rank;
    public:
        Wizard(const string &name, double health, double attackStrength, const int &rank) : 
            Character(WIZARD, name, health, attackStrength), 
            rank(rank) 
        {};
        void attack(Character &enemy) override;
        int getRank() const;
};

#endif