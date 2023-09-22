#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Compile with: g++ main.cpp -Wall -Werror -Wuninitialized -o ./a.exe
// Command line: ./a.exe seven.dat
// Command line: ./a.exe one_hundred.dat

//  - Passes in an array along with the size of the array.
//  - Returns the mean of all values stored in the array.
double mean(const double array[], int arraySize) {
   int i;
   double totalValue = 0;
   double meanValue;

   for (i = 0; i < arraySize; ++i) {
      totalValue += array[i];
   }

   meanValue = totalValue / arraySize;
   
   return meanValue;
}

//  - Passes in an array, the size of the array by reference, and the index of a value to be removed from the array.
//  - Removes the value at this index by shifting all of the values after this value up, keeping the same relative order of all values not removed.
//  - Reduces arraySize by 1.
void remove(double array[], int &arraySize, int index) {
   int i;

   for (i = index; i < arraySize - 1; ++i) {
      array[i] = array[i + 1];
   }
   --arraySize;
}

// - Passes in an array and the size of the array.
// - Outputs each value in the array separated by a comma and space, with no comma, space or newline at the end.
void display(const double array[], int arraySize) {
   int i;

   for (i = 0; i < arraySize; ++i) {
      if (i == arraySize - 1) {
         cout << array[i];
         break;
      }
      cout << array[i] << ", ";
   }
}


const int ARR_CAP = 100;

int main(int argc, char *argv[]) {
   ifstream inFS;
   int indexValueToBeRemoved;
   int arraySize = 0;
   // int i;
   
   // verify file name provided on command line
   if (argc != 2) {
      cout << "File name missing" << endl;
      return 0;
   }

   // open file and verify it opened
   inFS.open(argv[1]);

   // FIXME - verify it opened:
   // if (inFS.is_open()) {
   //    cout << "file opened correctly" << endl;
   // }

   // TEST: Output error message and return 1 if file stream did not open correctly.
   // if (!inFS.is_open()) {
   //    cout << "Error opening " << endl;
   //    return 1;
   // }

   // Declare an array of doubles of size ARR_CAP.
   double arrayOfDoubles[ARR_CAP];
   
   // Fill the array with up to ARR_CAP doubles from the file entered at the command line.
   inFS >> arrayOfDoubles[arraySize];
   while (!inFS.fail()) {
      ++arraySize;
      inFS >> arrayOfDoubles[arraySize];
   }
    
   // Call the mean function passing it this array and output the value returned.
   cout << "Mean: " << mean(arrayOfDoubles, arraySize) << endl << endl;

   // FIXME - testing array size: 
   // cout << "Array size: " << arraySize << endl;
   // for (i = 0; i < arraySize; ++i) {
   //    cout << arrayOfDoubles[i]<< " ";
   // }
    
   // Ask the user for the index (0 to size - 1) of the value they want to remove.
   cout << "Enter index of value to be removed (0 to " << arraySize - 1 << "): ";
   cin >> indexValueToBeRemoved;
   cout << endl << endl;
	
   // Call the display function to output the array.
   cout << "Before removing value: ";
   display(arrayOfDoubles, arraySize);
   cout << endl << endl;
   
   // Call the remove function to remove the value at the index provided by the user.
   remove(arrayOfDoubles, arraySize, indexValueToBeRemoved);
    
   // Call the display function again to output the array with the value removed.
   cout << "After removing value: ";
   display(arrayOfDoubles, arraySize);
   cout << endl << endl;
   
   // Call the mean function again to get the new mean
   cout << "Mean: " << mean(arrayOfDoubles, arraySize) << endl;

   inFS.close();
   
	return 0;
}