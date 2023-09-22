#include <iostream>
using namespace std;
// Compile with: g++ main.cpp minFunc.cpp -Wall -Werror -Wuninitialized -o ./a.exe

#include "minFunc.h"

int main() {
   int arrSize;
   cout << "Enter array size: ";
   cin >> arrSize;
   cout << endl;
   if (arrSize > 0) {
      int arr[arrSize];
      for (int i = 0; i < arrSize; ++i) {
         cout << "Enter a number: ";
         cin >> arr[i];
         cout << endl;
      }
      const int *minLoc = min(arr, arrSize);
      cout << *minLoc << endl;
   }   
   return 0;
}
