#include <iostream>
#include "IntVector.h"
using namespace std;
// Compile with: g++ main.cpp IntVector.cpp -Wall -Werror -Wuninitialized -o ./a.exe

int main() {
    IntVector testVector(10, 1);

    cout << "Beginning tests" << endl;

    cout << "testVector(10, 1), expecting 1 1 1 1 1 1 1 1 1 1" << endl;
    cout << "                        got: ";
    for (unsigned int i = 0; i < 10; ++i) {
        cout << testVector.at(i) << " ";
    }
    cout << endl;

    cout << "Testing IntVector.empty(): "; 
    IntVector test1Vector(0, 0);
    if (test1Vector.empty() == true) {
        cout << "Test PASSED" << endl;
    }
    else {
        cout << "Test FAILED" << endl;
    }

    cout << "testVector.at(10), expecting 1, got:  " << testVector.at(9) << endl;

    cout << "testVector.front(), expecting 1, got: " << testVector.front() << endl;

    cout << "test1Vector.front() with an empty vector, expecting [garbage], got: " << test1Vector.front() << endl; // This should output garbage.

    cout << "test1Vector.at(10), expecting out of range, " << endl;
    cout << "got: " << endl << test1Vector.at(10) << endl;

    return 0;
}