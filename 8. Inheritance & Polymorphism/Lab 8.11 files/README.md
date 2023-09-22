# Fantasy Battle Simulator
This program simulates battles between various fantasy characters, including Warriors, Elves, and Wizards. The program utilizes object-oriented programming concepts to create and manage characters, demonstrating inheritance, polymorphism, and random battle scenarios.

## Program Overview
This program showcases object-oriented programming principles:
- **Inheritance**: It uses inheritance to create specialized character classes (Warrior, Elf, and Wizard) that inherit common attributes and behaviors from the base class Character.
- **Polymorphism**: Polymorphism is employed to allow characters of different types to be treated as objects of a common base class (Character). This enables the program to work with characters of various types through a common interface, such as attacking and checking for health.
- **Randomization**: The program uses random numbers to simulate battles between characters. Random attacks and outcomes add unpredictability to the battles.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Sample Output

## Prerequisites
To compile and run this program, you'll need:

- A C++ compiler (e.g., g++)
- The Character.h, Warrior.h, Elf.h, Wizard.h, Character.cpp, Warrior.cpp, Elf.cpp, Wizard.cpp, and main.cpp files

## Compilation
Compile the program using the following command:

>	g++ main.cpp Warrior.cpp Character.cpp Wizard.cpp Elf.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will simulate battles between various fantasy characters and display the results in the console.

## Sample Output
```
$ ./a
Beginning tests...

Testing character, warrior, elf class

Summoning Dragonborn
Summoning stormcloak
Warrior Dragonborn does not attack Warrior Ralof.     
They share an allegiance with Jarl Ulfric.

Summoning Imperial
Warrior Dragonborn attacks Hadvar --- SLASH!!
Hadvar takes 10 damage.

Warrior Ralof attacks Hadvar --- SLASH!!
Hadvar takes 8 damage.

Warrior Hadvar has been slain.

Summoning altmer
Summoning bosmer
Elf Rulindil does not attack Elf Faendal.
They are both members of the Thalmor family.

Elf Rulindil shoots an arrow at Dragonborn --- TWANG!!
Dragonborn takes 4 damage.

Elf Rulindil shoots an arrow at Ralof --- TWANG!!     
Ralof takes 4 damage.

Warrior Ralof is still alive.

Warrior Dragonborn attacks Rulindil --- SLASH!!       
Rulindil takes 9.6 damage.

Elf Rulindil shoots an arrow at Dragonborn --- TWANG!!
Dragonborn takes 2.08 damage.

Warrior Dragonborn attacks Rulindil --- SLASH!!
Rulindil takes 9.392 damage.

Elf Rulindil has been slain.

Summoning mage
Summoning altmer
Wizard Ancano attacks Tolfdir --- POOF!!
Tolfdir takes 10 damage.

Wizard Tolfdir attacks Ancano --- POOF!!
Ancano takes 400 damage.

Wizard Ancano has been disintegrated.

Wizard Tolfdir attacks Ralof --- POOF!!
Ralof takes 80 damage.

Warrior Ralof has been slain.

Warrior Dragonborn attacks Tolfdir --- SLASH!!
Tolfdir takes 9.392 damage.

Wizard Tolfdir is dead and cannot attack.

Warrior Dragonborn is still alive.

Warrior Dragonborn attacks Tolfdir --- SLASH!!
Tolfdir takes 9.392 damage.

Wizard Tolfdir has been defeated.
Enter seed value: 69

Elf Melimion shoots an arrow at Merlin --- TWANG!!
Merlin takes 4 damage.

Wizard Merlin attacks Melimion --- POOF!!
Melimion takes 5 damage.

Elf Melimion shoots an arrow at Bob --- TWANG!!
Bob takes 3.8 damage.

Warrior Jane attacks Vrydore --- SLASH!!
Vrydore takes 6 damage.

Wizard Merlin attacks Raegron --- POOF!!
Raegron takes 5 damage.

Warrior Arthur attacks Cereasstar --- SLASH!!
Cereasstar takes 5 damage.

Warrior Jane does not attack Warrior Arthur.
They share an allegiance with King George.

Elf Raegron shoots an arrow at Merlin --- TWANG!!
Merlin takes 3.8 damage.

Wizard Vrydore attacks Adali --- POOF!!
Adali takes 3 damage.

Elf Raegron shoots an arrow at Bob --- TWANG!!
Bob takes 3.8 damage.

Elf Raegron shoots an arrow at Merlin --- TWANG!!
Merlin takes 3.8 damage.

Elf Cereasstar shoots an arrow at Melimion --- TWANG!!
Melimion takes 2.85 damage.

Elf Melimion shoots an arrow at Raegron --- TWANG!!
Raegron takes 3.686 damage.

Elf Melimion shoots an arrow at Adali --- TWANG!!
Adali takes 3.686 damage.

Wizard Merlin attacks Adali --- POOF!!
Adali takes 6.25 damage.

Warrior Bob attacks Arthur --- SLASH!!
Arthur takes 3.696 damage.

Warrior Bob attacks Cereasstar --- SLASH!!
Cereasstar takes 3.696 damage.

Wizard Adali attacks Cereasstar --- POOF!!
Cereasstar takes 5 damage.

Wizard Vrydore attacks Merlin --- POOF!!
Merlin takes 2.4 damage.

Warrior Jane attacks Cereasstar --- SLASH!!
Cereasstar takes 6 damage.

-----Health Remaining-----
Arthur: 96
Jane: 100
Bob: 92
Raegron: 91
Cereasstar: 80
Melimion: 92
Merlin: 86
Adali: 87
Vrydore: 94
```