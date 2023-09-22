# Recursive File Copying

## Program Overview

This program is designed to copy the contents of one file to another using recursion. It provides two functions for copying:

1. **rCopy(istream &inFS, ostream &outFS)**: This function takes an input stream and an output stream as parameters and recursively copies the contents of the input stream to the output stream. It is used to copy the contents of one file to another within the program.

2. **rCopy(const string &in, const string &out)**: This function takes the paths to two files as parameters, opens the input file for reading, and uses the rCopy(istream &inFS, ostream &outFS) function to copy the contents of the input file to the output file.

## Usage

To use the program, follow these steps:

1. Compile the program using the provided compilation command:

>	g++ main.cpp -Wall -Werror -o ./a.exe


2. Run the program from the command line with two arguments: the input file to copy from and the output file to copy to. For example:

>	./a.exe test1.dat outputfile.txt


3. The program will attempt to copy the contents of the input file to the output file using recursion.

4. After execution, the program will display either "Copy completed" if the copy was successful or "Copy not completed" if there was an error.


## Sample Output
`outputfile.txt` (before):
```
empty!
```

**CLI output**:
```
./a.exe test1.dat outputfile.txt
Copy completed
```

`test1.dat`:
```
nehesredeiW fuA
0 2 4
96
redruM
```

`outputfile.txt` (after):
```
Murder
69
4 2 0
Auf Wiedersehen
```

## Command-Line Arguments

- **input-file**: The path to the input file you want to copy from.
- **output-file**: The path to the output file where the contents will be copied.

If the program is not provided with exactly two command-line arguments, it will display a usage message and exit with an error code.

This program is a simple example of using recursion to copy the contents of a file and can be useful for understanding recursive file operations.
