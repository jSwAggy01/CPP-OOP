#include <iostream>
#include <string>
using namespace std;
// Compile with: g++ main.cpp -Wall -Werror -o ./a.exe

void flipString(string &s);

int main() {
   string line;
   cout << "Enter a sentence:" << endl;
   getline(cin, line);
   cout << endl;
   cout << line << endl;
   flipString(line);
   cout << line << endl;

   return 0;
}

//Implement the flipString function here
void flipString(string &s) {
   if (s.length() != 0) {
      char front = s[0];
      s = s.substr(1);
      // cout << "FIXME: " << s << endl;
      flipString(s);
      s += front;
    }
}
