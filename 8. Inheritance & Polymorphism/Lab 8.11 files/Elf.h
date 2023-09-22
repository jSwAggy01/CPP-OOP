#ifndef ELF_H
#define ELF_H

#include <iostream>
#include "Character.h"

using namespace std;

class Elf : public Character {
    private:
        string familyName;
    public:
        Elf(const string &name, double health, double attackStrength, const string &familyName) : 
            Character(ELF, name, health, attackStrength), 
            familyName(familyName) 
        {};
        void attack(Character &enemy) override;
        string getFamilyName() const;
};

#endif