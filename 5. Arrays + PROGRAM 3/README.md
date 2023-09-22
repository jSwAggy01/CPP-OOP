# Arrays

## Introduction
An array is a fundamental data structure. It is a collection of elements of the same data type, stored in contiguous memory locations. Arrays provide a convenient way to work with multiple values of the same type under a single variable name.

## Declaration and Initialization
To declare an array, you specify the data type of its elements and the array name followed by square brackets indicating the array's size.

```cpp
dataType arrayName[arraySize];
```

For example, to declare an integer array of size 5:

```cpp
int myArray[5];
```

You can also initialize an array during declaration:

```cpp
    int myArray[] = {1, 2, 3, 4, 5};
```

## Accessing Array Elements
Array elements are accessed using an index, starting from 0 for the first element and up to arraySize - 1 for the last element.

```cpp
int element = myArray[index];
```

For example:

```cpp
int firstElement = myArray[0];   // Accesses the first element (1)
int secondElement = myArray[1];  // Accesses the second element (2)
```

## Array Size
The size of an array is fixed upon declaration and cannot be changed during runtime. You can obtain the size of an array using the sizeof operator.

```cpp
int size = sizeof(myArray) / sizeof(myArray[0]);
```

## Iterating Through an Array
You can use loops, like for or while, to iterate through the elements of an array:

```cpp
for (int i = 0; i < arraySize; i++) {
// Access and manipulate myArray[i]
}
```

## Arrays and Functions
Passing arrays to functions in C++ is slightly different from other data types. You often need to pass both the array and its size explicitly to functions.

```cpp
void myFunction(int arr[], int size) {
// Function code here
}
```

## Multidimensional Arrays
C++ supports multidimensional arrays, such as 2D arrays (matrices). They are declared using multiple sets of square brackets:

```cpp
dataType arrayName[rowSize][columnSize];
```

## Conclusion
Arrays are a fundamental part of C++ programming and provide a way to work with collections of data efficiently. Understanding how to declare, initialize, access, and manipulate arrays is crucial for writing C++ programs that deal with multiple values.