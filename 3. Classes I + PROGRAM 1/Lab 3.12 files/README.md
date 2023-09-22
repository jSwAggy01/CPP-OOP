# Rational Number Calculator

This program implements a rational number calculator using a `Rational` class. Users can create and perform various arithmetic operations on rational numbers, including addition, subtraction, multiplication, and division. The program also allows simplification of rational numbers.

## Rational Class

The `Rational` class is defined with the following features:

- Constructors:
	- Two-parameter constructor (`Rational(int numerator, int denominator)`)
	- One-parameter constructor (`Rational(int numerator)`)
	- Default constructor (`Rational()`) with values set to 0/1

- Accessor Functions:
	- Addition (`add(const Rational &rhs)`) of two rational numbers
	- Subtraction (`subtract(const Rational &rhs)`) of two rational numbers
	- Multiplication (`multiply(const Rational &rhs)`) of two rational numbers
	- Division (`divide(const Rational &rhs)`) of two rational numbers
	- Display (`display()`) to print the rational number

- Mutator Function:
  	- Simplify (`simplify()`) to simplify the rational number

## Usage

To compile and run the program:

>	g++ main.cpp -o rational_calculator

## Sample Output
```
$ ./rational_calculator
Enter Rational A:
Which Rational constructor? (Enter 2, 1, or 0)
2 - 2 parameters (numerator & denominator)    
1 - 1 parameter (numerator)
0 - 0 parameters (default)
2

numerator? 1

denominator? 3


Enter Rational B:
Which Rational constructor? (Enter 2, 1, or 0)
2 - 2 parameters (numerator & denominator)    
1 - 1 parameter (numerator)
0 - 0 parameters (default)
5


Enter Operation:
a - Addition (A + B)      
s - Subtraction (A - B)   
m - Multiplication (A * B)
d - Division (A / B)      
y - Simplify A
m

(1 / 3) * (0 / 1) = (0 / 3)

```
