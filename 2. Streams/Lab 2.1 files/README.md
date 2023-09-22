# File Summation Program

This program demonstrates how to read data from a file, perform summation, and handle errors when opening the file.

## Program Overview

The program consists of two main functions, `main` and `fileSum`, and follows these key concepts:

### 1. Reading Data from a File

The program uses the `<fstream>` library to read data from a file. The `fileSum` function reads integers from the file and calculates their sum.

### 2. Error Handling

The program demonstrates error handling when opening a file. If the file cannot be opened, it prints an error message and exits the program.

### 3. Function Usage

The `main` function demonstrates how to call the `fileSum` function, taking user input for the name of the input file and passing it as an argument to `fileSum`.

### 4. Reading File Data

Within the `fileSum` function, a `while` loop is used to read integers from the file one by one, accumulating their sum in the `sum` variable.

### 5. Output

The program prints the sum of the integers read from the file to the standard output.

## Usage

To compile and run the program:

>	g++ main.cpp -Wall -Werror -o ./a.exe
>	./a.exe