# IntList Operations
This program allows the user to perform various operations on an integer list using the IntList class. The program is split into two files, main.cpp and IntList.h, demonstrating the use of classes, functions, and operator overloading.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Program Overview

## Prerequisites
To compile and run this program, you'll need:

- A C++ compiler (e.g., g++)
- The main.cpp and IntList.h files.

## Compilation
Compile the program using the following command:

>	g++ IntList.cpp main.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will prompt you to enter a test number (1 or 2) to perform specific operations on an integer list. It will then display the results of these operations in the console.

## Program Overview
This program is divided into two main files:

- main.cpp: This file contains the main program logic. It does the following:
	- Asks the user to choose a test number (1 or 2) to perform specific operations on an IntList.
	- Tests the << operator overload to display the contents of the IntList.
	- Tests the exists function to check if a specific value exists in the IntList.
- IntList.h: This header file contains the IntList class definition and implementation. Key features of the program include:
	- The IntList class represents a singly linked list of integers.
	- It provides functions to insert integers at the front (push_front) and check if a value exists within the list (exists).
	- It overloads the << operator to display the contents of the list.