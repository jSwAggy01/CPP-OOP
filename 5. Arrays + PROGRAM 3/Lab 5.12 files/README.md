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

## Output Sample

```
$ ./a one_hundred.dat
Mean: 5.36566

Enter index of value to be removed (0 to 98): 0


Before removing value: 10, 2, 4, 3, 9, 8.1, 2, 5.6, 8.1, 9, 3, 4.67, 8, 2, 8, 4, 2, 1, 19, 29.32, 4, 5, 9.1, 9, 2, 3.1, 8, 4, 1, 2, 1.2, 9.45, 8, 4, 3, 3, 2.12, 3, 9, 11, -2.3, 4, 2, 8, 
9, 11, 21.3, 9, 4, 9, 1, 8, 2, 9, 0.45, 4.5, 2, 1, 9, 5.4, 4, 5, 6, 3, 2, 9, 5, 6.3, -16, 5, 
9, 2, 0.3, 34, 5, 2.1, 6, 8.7, 9.23, 10, 5, 9, 3.2, 5.67, -9.8, 2, 3, 9, 4.5, 2.89, 4, 8, 7, 
21, -43.2, 5.2, 9, 8, 2

After removing value: 2, 4, 3, 9, 8.1, 2, 5.6, 8.1, 9, 3, 4.67, 8, 2, 8, 4, 2, 1, 19, 29.32, 
4, 5, 9.1, 9, 2, 3.1, 8, 4, 1, 2, 1.2, 9.45, 8, 4, 3, 3, 2.12, 3, 9, 11, -2.3, 4, 2, 8, 9, 11, 21.3, 9, 4, 9, 1, 8, 2, 9, 0.45, 4.5, 2, 1, 9, 5.4, 4, 5, 6, 3, 2, 9, 5, 6.3, -16, 5, 9, 2, 0.3, 34, 5, 2.1, 6, 8.7, 9.23, 10, 5, 9, 3.2, 5.67, -9.8, 2, 3, 9, 4.5, 2.89, 4, 8, 7, 21, -43.2, 5.2, 9, 8, 2

Mean: 5.31837
```