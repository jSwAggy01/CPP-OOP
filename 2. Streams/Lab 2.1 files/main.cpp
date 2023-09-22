#include <fstream>
#include <iostream>
#include <cstdlib> //needed for exit function
using namespace std;
// Compile with: g++ main.cpp -Wall -Werror -o ./a.exe

int fileSum(string fileName) {
   ifstream inFS;
   int fileNum;
   int sum = 0;

   // Open the file.
   inFS.open(fileName);

   // Check for errors.
   if (!inFS.is_open()) {
      cout << "Error opening " << fileName << endl;
      exit(1);
   }

   // Read each integer in file.
   while (inFS >> fileNum) {
      sum = sum + fileNum;
   }

   inFS.close();

   return sum;
}

int main() {

   string filename;
   int sum = 0;
   
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   
   sum = fileSum(filename);

   cout << "Sum: " << sum << endl;
   
   return 0;
}

// Place fileSum implementation here