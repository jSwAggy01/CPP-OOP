# Calendar Dates Program

This program provides functionalities for creating and manipulating dates in different formats, correcting invalid inputs, and printing dates in numeric and alpha formats. It allows users to create Date objects by specifying the date in various ways, such as month number, day, and year or month name, day, and year.

## Class Overview

The Date class offers the following features:

1. **Date Constructors**:
   - Default constructor: Creates a Date object with the default date set to January 1st, 2000.
   - Parameterized constructor (month number): Constructs a Date object by specifying the month number, day, and year. If the input values are invalid, it corrects them and provides a console error message.
   - Parameterized constructor (month name): Constructs a Date object by specifying the month name, day, and year. If the input values are invalid or the month name is unrecognized, it corrects them and provides appropriate error messages.

2. **Print Functions**:
   - `printNumeric()`: Outputs the Date object in the format "3/15/2012" to the console.
   - `printAlpha()`: Outputs the Date object in the format "March 15, 2012" to the console.

3. **Leap Year Check**:
   - `isLeap(unsigned y) const`: Checks if a given year is a leap year and returns `true` or `false` accordingly.

4. **Days per Month Calculation**:
   - `daysPerMonth(unsigned m, unsigned y) const`: Calculates the number of days allowed in a given month, considering leap years.

5. **Month Name and Number Conversion**:
   - `name(unsigned m) const`: Returns the name of a given month number (e.g., "December" for 12).
   - `number(const string &mn) const`: Returns the number of a given month name (e.g., 3 for "March").

## Usage

1. Include the `Date` class in your C++ project.

2. Create `Date` objects using the provided constructors based on your date input requirements.

3. Use the `printNumeric()` and `printAlpha()` methods to display dates in the desired format.

4. The class will automatically correct invalid inputs and issue error messages.

5. For leap year handling, you can use the `isLeap()` method.

6. Compile your C++ program, linking it with the Date class.

7. Run your program to create and manipulate dates.

## Example

>	#include <iostream>
>	#include "Date.h" // Include the Date class header file

>	int main() {
>		Date testDate;
>		testDate = getDate();
>		std::cout << "Numeric: ";
>		testDate.printNumeric();
>		std::cout << std::endl;
>		std::cout << "Alpha:   ";
>		testDate.printAlpha();
>		std::cout << std::endl;
>	return 0;
>	}