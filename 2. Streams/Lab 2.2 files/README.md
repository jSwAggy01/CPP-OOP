# Character Count Program

This program calculates the number of occurrences of a specific character in a text file. It demonstrates file input, character counting, and error handling.

## Program Overview

The program consists of two main functions, `main` and `charCnt`, and follows these key concepts:

### 1. Character Counting

The `charCnt` function reads a text file and counts the occurrences of a specified character. It then returns the count.

### 2. Error Handling

The program performs error handling when opening the file. If the file cannot be opened, it prints an error message and exits the program.

### 3. User Interaction

The `main` function takes user input for the name of the input file and the character to count. It then calls the `charCnt` function to perform the character count.

## Usage

To compile and run the program:

>	g++ main.cpp -Wall -Werror -o ./a.exe
>	./a.exe
