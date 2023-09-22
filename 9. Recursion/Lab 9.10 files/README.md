# String Reversal Program
This program allows the user to enter a sentence, and then it reverses the order of characters in that sentence. The program demonstrates the use of recursion to reverse the input string.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Program Overview

## Prerequisites
To compile and run this program, you'll need:

- A C++ compiler (e.g., g++)
- The main.cpp file

## Compilation
Compile the program using the following command:

>	g++ main.cpp -Wall -Werror -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will prompt you to enter a sentence, and then it will display the original sentence followed by the reversed sentence in the console.

## Program Overview
This program demonstrates the use of a recursive function, flipString, to reverse a given string. Key features of the program include:

- **User Input**: The program uses getline to receive a sentence as input from the user.

- **String Reversal**: The flipString function is called to reverse the characters within the sentence. It does this by recursively swapping the first character with the last character, reducing the string length each time until the entire string is reversed.

- **Output**: The program displays the original input sentence and the reversed sentence in the console.