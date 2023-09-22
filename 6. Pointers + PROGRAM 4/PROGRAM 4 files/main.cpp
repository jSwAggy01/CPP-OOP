#include <iostream>
#include "IntVector.h"
using namespace std;
// Compile with: g++ main.cpp IntVector.cpp -Wall -Werror -Wuninitialized -o ./a.exe

int main() {
    IntVector testVector(10, 1);

    cout << "Beginning tests..." << endl;
    cout << endl;

    cout << "testVector(10, 1), expecting 1 1 1 1 1 1 1 1 1 1" << endl;
    cout << "                        got: ";
    for (unsigned int i = 0; i < 10; ++i) {
        cout << testVector.at(i) << " ";
    }
    cout << endl;

    cout << "testVector1.empty()... "; 
    IntVector testVector1(0, 0);
    if (testVector1.empty() == true) {
        cout << "Test PASSED" << endl;
    }
    else {
        cout << "Test FAILED" << endl;
    }

    cout << "testVector.at(9), expecting 1  " << endl;
    cout << "                       got: " << testVector.at(9) << endl;

    cout << "testVector.front(), expecting 1" << endl;
    cout << "                         got: " << testVector.front() << endl;

    cout << "testVector.back(), expecting 1" << endl;
    cout << "                        got: " << testVector.back() << endl;

    cout << "testVector1.front() with an empty vector, expecting [garbage]" << endl;
    cout << "                                               got: " << testVector1.front() << endl; // This should output a garbage number.

    // cout << "test1Vector.at(10), expecting out of range, " << endl;  // Out-of-range test works; commented out for other tests.
    // cout << "got: " << endl << test1Vector.at(10) << endl;

    testVector.insert(0, 2);
    cout << "testVector.insert(0, 2), expecting 2 1 1 1 1 1 1 1 1 1 1" << endl;
    cout << "                              got: ";
    for (unsigned int i = 0; i < 11; ++i) {
        cout << testVector.at(i) << " ";
    }
    cout << endl;

    testVector.erase(0);
    cout << "testVector.erase(0), expecting 1 1 1 1 1 1 1 1 1 1" << endl;
    cout << "                          got: ";
    for (unsigned int i = 0; i < 10; ++i) {
        cout << testVector.at(i) << " ";
    }
    cout << endl;

    testVector.push_back(2);
    cout << "testVector.push_back(2), expecting 1 1 1 1 1 1 1 1 1 1 2" << endl;
    cout << "                              got: ";
    for (unsigned int i = 0; i < 11; ++i) {
        cout << testVector.at(i) << " ";
    }
    cout << endl;

    testVector.pop_back();
    cout << "testVector.pop_back(), expecting 1 1 1 1 1 1 1 1 1 1" << endl;
    cout << "                            got: ";
    for (unsigned int i = 0; i < 10; ++i) {
        cout << testVector.at(i) << " ";
    }
    cout << endl;

    testVector.clear();
    cout << "testVector.clear()... ";
    if (testVector.empty() == true) {
        cout << "Test PASSED" << endl;
    }
    else {
        cout << "Test FAILED" << endl;
    }

    IntVector testVector2(10, 1);
    testVector2.resize(15, 2);
    cout << "testVector2.resize(15, 2), expecting 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2" << endl;
    cout << "                                got: ";
    for (unsigned int i = 0; i < 15; ++i) {
        cout << testVector2.at(i) << " ";
    }
    cout << endl;

    testVector2.resize(5, 2);   // The second parameter is irrelevant
    cout << "testVector2.resize(5, 2), expecting 1 1 1 1 1" << endl;
    cout << "                               got: ";
    for (unsigned int i = 0; i < 5; ++i) {
        cout << testVector2.at(i) << " ";
    }
    cout << endl;

    /* [FIXME: Add test for testVector2.reserve()] */
    cout << "FIXME: testVector2.reserve()" << endl;

    testVector2.assign(10, 2);
    cout << "testVector2.assign(10, 2), expecting 2 2 2 2 2 2 2 2 2 2" << endl;
    cout << "                                got: ";
    for (unsigned int i = 0; i < 10; ++i) {
        cout << testVector2.at(i) << " ";
    }
    cout << endl;

    testVector2.assign(5, 1);
    cout << "testVector2.assign(5, 1), expecting 1 1 1 1 1" << endl;
    cout << "                               got: ";
    for (unsigned int i = 0; i < 5; ++i) {
        cout << testVector2.at(i) << " ";
    }
    cout << endl;

    testVector2.at(3) = 3;
    cout << "testVector2.at(3) = 3, expecting 3" << endl;
    cout << "                            got: " << testVector2.at(3) << endl;

    testVector2.front() = 11;
    cout << "testVector2.front(), expecting 11" << endl;
    cout << "                          got: " << testVector2.front() << endl;

    testVector2.back() = 5;
    cout << "testVector2.back() = 5, expecting 5" << endl;
    cout << "                             got: " << testVector2.back() << endl;

    cout << endl;
    cout << "Testing completed" << endl;
    cout << endl;

    cout << "Beginning zyBooks tests..." << endl;
    cout << endl;

    IntVector testVector3(0, 0);
    testVector3.push_back(200);
    cout << "Unit test 8: testVector3.push_back(200) with an empty vector, expecting capacity 1" << endl;
    cout << "                                                                            got: " << testVector3.capacity() << endl;

    testVector3.push_back(200);
    cout << "Unit test 8: testVector3.push_back(200) again with an empty vector, expecting capacity 2" << endl;
    cout << "                                                                                  got: " << testVector3.capacity() << endl;

    IntVector testVector4(0, 0);
    testVector4.resize(25);
    cout << "Unit test 15: testVector4.resize(25) with testVector4(0, 0), expecting capacity 25" << endl;
    cout << "                                                                           got: " << testVector4.capacity() << endl;

    IntVector testVector5(20, 0);
    testVector5.resize(25);
    cout << "Unit test 15a: testVector5.resize(25) with testVector5(20, 0), expecting capacity 25" << endl;
    cout << "                                                                             got: " << testVector5.capacity() << endl;

    IntVector testVector6(20, 0);
    testVector6.assign(25);
    cout << "Unit test 17: testVector5.assign(25) with testVector6(20, 0), expecting capacity 25" << endl;
    cout << "                                                                            got: " << testVector6.capacity() << endl;

    IntVector testVector7(0, 0);
    testVector7.assign(25);         // This is causing the segmentation fault!
    cout << "Unit test 17a: testVector7.resize(25) with testVector7(0, 0), expecting capacity 25" << endl;
    cout << "                                                                            got: " << testVector7.capacity() << endl;


    cout << "ZyBooks testing completed" << endl;

    return 0;
}

// Compile with: g++ main.cpp IntVector.cpp -Wall -Werror -Wuninitialized -o ./a.exe