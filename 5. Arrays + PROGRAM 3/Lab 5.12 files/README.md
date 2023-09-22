# Array Manipulation Program

This program reads a list of double values from a file, performs operations on the array of values, and then displays the results. The program provides functionality to calculate the mean of the values, remove a value at a specific index, and display the array before and after removal.

## Prerequisites

- C++ compiler (e.g., g++)
- Input data file with a list of double values

## Usage

Compile the program using the following command:

>	g++ main.cpp -Wall -Werror -Wuninitialized -o ./a.exe


Run the program with the input data file as a command-line argument. For example:

>	./a.exe input.dat

Replace `input.dat` with the name of your input data file.

## Functions

### `double mean(const double array[], int arraySize)`

- Calculates and returns the mean (average) of the values stored in the given array.

### `void remove(double array[], int &arraySize, int index)`

- Removes the value at the specified index from the array by shifting all values after that index up.
- Reduces the `arraySize` parameter by 1.

### `void display(const double array[], int arraySize)`

- Displays each value in the array separated by a comma and space, with no comma, space, or newline at the end.

## Input File Format

The program reads a list of double values from the input file. The values should be separated by whitespace (e.g., spaces or tabs).

## Example

Suppose you have an input data file named `input.dat` containing the following values:

>	10.5 20.3 30.8 15.2 25.7

Running the program with this input file will calculate and display the mean, allow you to remove a value at a specific index, and display the updated array.