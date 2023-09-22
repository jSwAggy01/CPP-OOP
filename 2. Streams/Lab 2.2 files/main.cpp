#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

// Place charCnt prototype (declaration) here
int charCnt(string fileName, char ch) {
   ifstream inFS;
   string fileStr;
   int charCount = 0;
   unsigned int i;
   
   // Open the file.
   inFS.open(fileName);

   // Check for errors.
   if (!inFS.is_open()) {
      cout << endl << "Error opening " << fileName << endl;
      exit(1);
   }

   // Save file into a string and read each character in the file.
   while (getline(inFS, fileStr)) {
      for (i = 0; i < fileStr.size(); i++) {
         if (ch == fileStr.at(i)) {
            charCount += 1;
         }
      }
   }

   cout << fileStr << endl; // FIXME.
   
   // Close the file.
   inFS.close();

   return charCount;
}

int main() {
   string filename;
   char ch;
   int chCnt = 0;
   
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   cout << "Enter a character: ";
   cin.ignore(); // ignores newline left in stream after previous input statement
   cin.get(ch);

   chCnt = charCnt(filename, ch);   
   cout << "# of " << ch << "'s: " << chCnt << endl;
   
   return 0;
}

// Place charCnt implementation here
