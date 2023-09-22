#include <iostream>
#include <fstream>
using namespace std;
// Compile with: g++ main.cpp -Wall -Werror -o ./a.exe
// Command line: ./a.exe test1.dat outputfile.txt

void rCopy(istream &, ostream &);
bool rCopy(const string &, const string &);

int main(int argc, char *argv[]) {

    if (argc != 3) {
        cout << "USAGE: " << argv[0] << " input-file output-file" << endl;
        return 1;
    }

    if (rCopy(argv[1], argv[2])) {
        cout << "Copy completed" << endl;
    } 
    else {
        cout << "Copy not completed" << endl;
    }
   
   return 0;
}



// Implement these functions

void rCopy(istream &inFS, ostream &outFS) {;
    char front;

    if (inFS.eof() || inFS.fail()) {
        return;
    }

    inFS.get(front);
    rCopy(inFS, outFS);
    // cout << front << endl;  // FIXME!
    if (isalnum(front) || ispunct(front) || isspace(front)) {
        outFS << front;
    }
}

bool rCopy(const string &in, const string &out) {
    ifstream inFS(in);

    if (!inFS.is_open()) {
        cout << "Error opening " << in << endl;
        return false;
    }

    ofstream outFS(out);

    rCopy(inFS, outFS);

    return true;
}

// Compile with: g++ main.cpp -Wall -Werror -o ./a.exe
// Command line: ./a.exe test1.dat outputfile.txt