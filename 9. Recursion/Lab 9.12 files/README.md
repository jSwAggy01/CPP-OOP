# IntList Operations
This program allows the user to perform various operations on an integer list using the IntList class. The program is split into two files, `main.cpp` and `IntList.h`, demonstrating the use of classes, functions, and operator overloading.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Output
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

## Output
Test case 1:
```
$ ./a
Enter test number: 1

Empty : T
Size 1: 3T
Size 2: 0 3T       
Size 5: 0 8 -3 0 3T
```

Test case 2:
```
$ ./a
Enter test number: 2

Empty: 0
Size 1 (doesn't exist): 0   
Size 1 (does exist): 1      
Size 5 (doesn't exist): 0   
Size 5 (exists in head): 1  
Size 5 (exists in tail): 1  
Size 5 (exists in middle): 1
```

## Program Overview
This program is divided into two main files:

- `main.cpp`: This file contains the main program logic. It does the following:
	- Asks the user to choose a test number (1 or 2) to perform specific operations on an IntList.
	- Tests the << operator overload to display the contents of the IntList.
	- Tests the exists function to check if a specific value exists in the IntList.
- `IntList.h`: This header file contains the IntList class definition and implementation. Key features of the program include:
	- The IntList class represents a singly linked list of integers.
	- It provides functions to insert integers at the front (push_front) and check if a value exists within the list (exists).
	- It overloads the << operator to display the contents of the list.