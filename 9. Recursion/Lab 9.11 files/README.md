# Minimum Element Finder Program
This program allows the user to enter an array of integers and then finds and displays the minimum element in the array. The program is split into two files, main.cpp and minFunc.cpp, demonstrating the use of functions and function prototypes.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Sample Output
- Program Overview

## Prerequisites
To compile and run this program, you'll need:

- A C++ compiler (e.g., g++)
- The main.cpp and minFunc.cpp files, along with the associated minFunc.h header file.

## Compilation
Compile the program using the following command:

>	g++ main.cpp minFunc.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will prompt you to enter the size of the array and then to enter the array elements. It will then find and display the minimum element in the array in the console.

## Sample Output
```
$ ./a
Enter array size: 10

Enter a number: 99

Enter a number: 44

Enter a number: 98

Enter a number: 55

Enter a number: 10 

Enter a number: 101

Enter a number: 4

Enter a number: 9

Enter a number: 61

Enter a number: 7

4
```

## Program Overview
This program is divided into two main files:

- `main.cpp`: This file contains the main program logic. It does the following:
	- Asks the user for the size of the array.
	- Reads the elements of the array.
	- Calls the min function from minFunc.cpp to find the minimum element.
	- Displays the minimum element in the console.

- `minFunc.cpp`: This file contains the min function, which is responsible for finding the minimum element in an integer array using recursion. Key features of the program include:
	- The min function is implemented recursively, comparing elements one by one and returning the minimum.
	- It handles the base case where the array size is 1 and the case where the array is nullptr.