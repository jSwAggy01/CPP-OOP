# Fantasy Battle Simulator
This program simulates battles between various fantasy characters, including Warriors, Elves, and Wizards. The program utilizes object-oriented programming concepts to create and manage characters, demonstrating inheritance, polymorphism, and random battle scenarios.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Program Overview

## Prerequisites
To compile and run this program, you'll need:

A C++ compiler (e.g., g++)
The Character.h, Warrior.h, Elf.h, Wizard.h, Character.cpp, Warrior.cpp, Elf.cpp, Wizard.cpp, and main.cpp files

## Compilation
Compile the program using the following command:

>	g++ main.cpp Warrior.cpp Character.cpp Wizard.cpp Elf.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will simulate battles between various fantasy characters and display the results in the console.

## Program Overview
This program showcases object-oriented programming principles:
- Inheritance: It uses inheritance to create specialized character classes (Warrior, Elf, and Wizard) that inherit common attributes and behaviors from the base class Character.
- Polymorphism: Polymorphism is employed to allow characters of different types to be treated as objects of a common base class (Character). This enables the program to work with characters of various types through a common interface, such as attacking and checking for health.
- Randomization: The program uses random numbers to simulate battles between characters. Random attacks and outcomes add unpredictability to the battles.