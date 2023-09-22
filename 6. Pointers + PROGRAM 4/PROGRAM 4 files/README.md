# Vector Implementation and Testing
This program demonstrates the usage of the IntVector class, which is implemented in the IntVector.h and IntVector.cpp files. The program performs various operations on IntVector objects and includes both custom tests and ZyBooks unit tests.

## Table of Contents
- Prerequisites
- Compilation
- Usage
- Custom Tests
- ZyBooks Tests

## Prerequisites
To compile and run this program, you'll need:

- A C++ compiler (e.g., g++)
- The IntVector.h, IntVector.cpp and main.cpp files

## Compilation
Compile the program using the following command:

>	g++ main.cpp IntVector.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Usage
After compilation, execute the program by running ./a.exe (or a.exe on Windows). The program will perform a series of operations on IntVector objects and display the results.

## Custom Tests
The program includes custom tests to verify the functionality of the IntVector class. These tests cover various aspects of IntVector operations, such as insertion, erasure, resizing, and more. The test results will be displayed in the console.

## ZyBooks Tests
The program also includes unit tests from ZyBooks, a platform used for educational purposes. These tests are designed to validate the correctness of the IntVector class. The results of these tests will be displayed in the console as well.

## Output
```
./a
Beginning tests...

testVector(10, 1), expecting 1 1 1 1 1 1 1 1 1 1
                        got: 1 1 1 1 1 1 1 1 1 1
testVector1.empty()... Test PASSED
testVector.at(9), expecting 1
                       got: 1
testVector.front(), expecting 1
                         got: 1
testVector.back(), expecting 1
                        got: 1
testVector1.front() with an empty vector, expecting [garbage]      
                                               got: 0
testVector.insert(0, 2), expecting 2 1 1 1 1 1 1 1 1 1 1
                              got: 2 1 1 1 1 1 1 1 1 1 1
testVector.erase(0), expecting 1 1 1 1 1 1 1 1 1 1
                          got: 1 1 1 1 1 1 1 1 1 1
testVector.push_back(2), expecting 1 1 1 1 1 1 1 1 1 1 2
                              got: 1 1 1 1 1 1 1 1 1 1 2
testVector.pop_back(), expecting 1 1 1 1 1 1 1 1 1 1
                            got: 1 1 1 1 1 1 1 1 1 1
testVector.clear()... Test PASSED
testVector2.resize(15, 2), expecting 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 
                                got: 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 
testVector2.resize(5, 2), expecting 1 1 1 1 1
                               got: 1 1 1 1 1
FIXME: testVector2.reserve()
testVector2.assign(10, 2), expecting 2 2 2 2 2 2 2 2 2 2
                                got: 2 2 2 2 2 2 2 2 2 2
testVector2.assign(5, 1), expecting 1 1 1 1 1
                               got: 1 1 1 1 1
testVector2.at(3) = 3, expecting 3
                            got: 3
testVector2.front(), expecting 11
                          got: 11
testVector2.back() = 5, expecting 5
                             got: 5

Testing completed

Beginning zyBooks tests...

Unit test 8: testVector3.push_back(200) with an empty vector, expecting capacity 1
                                                                            got: 1
Unit test 8: testVector3.push_back(200) again with an empty vector, expecting capacity 2
                                                                                  got: 2     
Unit test 15: testVector4.resize(25) with testVector4(0, 0), expecting capacity 25
                                                                           got: 25
Unit test 15a: testVector5.resize(25) with testVector5(20, 0), expecting capacity 25
                                                                             got: 40
Unit test 17: testVector5.assign(25) with testVector6(20, 0), expecting capacity 25
                                                                            got: 40
Unit test 17a: testVector7.resize(25) with testVector7(0, 0), expecting capacity 25
                                                                            got: 25
ZyBooks testing completed
```

