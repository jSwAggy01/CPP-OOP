#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
   string inputFile;
   string outputFile;
   vector<int> numList;    // The numbers without commas
   unsigned int i;
   int inputNum;
   int avg;
   int sum = 0;

   // Assign to inputFile value of 2nd command line argument
   inputFile = argv[1];

   // Assign to outputFile value of 3rd command line argument
   outputFile = argv[2];

   // Create input stream and open input csv file.
   ifstream inFS;
   inFS.open(inputFile);
   
   // Verify file opened correctly.
   if (inFS.is_open()) {
      cout << "file opened correctly" << endl;
   }

   // Output error message and return 1 if file stream did not open correctly.
   if (!inFS.is_open()) {
      cout << "Error opening " << endl;
      exit(1);
   }

   // Read in integers from input file to vector.
   while (inFS >> inputNum) {
      numList.push_back(inputNum);
      if (!inFS.eof()) {   // Get the rest of the numbers.
         inFS.clear();
         char comma;
         inFS >> comma;
      }
   }

   // Close input stream.
   inFS.close();
   
   // Get integer average of all values read in.
   for (i = 0; i < numList.size(); ++i) {    // (1)
      sum = sum + numList.at(i);
   }

   avg = sum / numList.size();   // (2)
   
   // Convert each value within vector to be the difference between the original value and the average.
   for (i = 0; i < numList.size(); ++i) {
      numList.at(i) = numList.at(i) - avg;
   }
   
   // Create output stream and open/create output csv file.
   ofstream outFS(outputFile);

   // Verify file opened or was created correctly.
   // Output error message and return 1 if file stream did not open correctly.
   if (!outFS.is_open()) {
      cout << "Error opening " << outputFile << endl;
      return 1;
   }
   
   // Write converted values into ouptut csv file, each integer separated by a comma.
   for (i = 0; i < numList.size(); ++i) {
      outFS << numList.at(i);
      if ((i + 1) < numList.size()) {
         outFS << ',';
      }
   }
   
   // Close output stream.
   outFS.close();
   
   return 0;
}