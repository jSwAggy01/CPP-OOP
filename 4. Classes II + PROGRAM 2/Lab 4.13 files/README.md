# Distance Calculator README
This C++ program, the "Distance Calculator," demonstrates the usage of the Distance class for performing mathematical operations on distances represented in feet and inches. The program includes various operations such as addition and subtraction of distances.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Program Overview

## Prerequisites
To compile and run this program, you'll need:

- A C++ compiler (e.g., g++)
- The Distance.cpp, Distance.h and main.cpp files

## Compilation
Compile the program using the following command:

>	g++ main.cpp Distance.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will perform various operations on distances and display the results in the console.

## Program Overview
This program showcases the Distance class, which allows you to work with distances in feet and inches. Key features and operations include:
- Initialization: You can create Distance objects with various constructors that accept both feet and inches or only inches.
- Addition: The program demonstrates adding distances together, handling cases where the sum exceeds 12 inches and requires converting to feet and inches.
- Subtraction: Subtraction of distances is also supported, including cases where the result may include negative values for feet or inches.

The program provides a practical example of working with measurements and demonstrates how to use a custom class to perform arithmetic operations on distances.

## Sample Output
```
$ ./a
d1: 0' 0"
d2: 2' 5.9"        
d3: 0' 3.75"       
d4: 6' 7.34"       
d5: 8' 4"
d4 + d5: 14' 11.34"
d2 + d4: 9' 1.24"  
d3 - d1: 0' 3.75"  
d1 - d3: 0' 3.75"  
d4 - d2: 4' 1.44"  
d2 - d4: 4' 1.44"  
d4 - d5: 1' 8.66"  
d5 - d2: 5' 10.1"  
```
