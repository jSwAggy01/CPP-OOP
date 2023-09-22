# IntList - Singly Linked List with Sum Calculation

## Overview

This program demonstrates the implementation of a singly linked list data structure and a class called `IntList` that operates on this linked list. The program allows users to create instances of `IntList`, insert integer elements at the front of the list, and calculate the sum of the elements in the list.

## Table of Contents

- [Introduction](#introduction)
- [Program Components](#program-components)
- [Usage](#usage)
- [Example](#example)
- [Output](#output)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A singly linked list is a data structure composed of individual nodes, each containing a data element and a pointer to the next node in the sequence. In this program, we define a struct `IntNode` to represent a node in the list and a class `IntList` to represent the list itself. The `IntList` class provides methods for inserting elements at the front of the list and calculating the sum of all elements.

## Program Components

### IntNode Struct

- The `IntNode` struct represents a node in the singly linked list.
- It contains two members:
  - `data`: An integer data element.
  - `next`: A pointer to the next node in the list.
- The constructor initializes the `data` and sets the `next` pointer to `nullptr`.

### IntList Class

- The `IntList` class represents a singly linked list.
- It contains private data members:
  - `head`: A pointer to the first node in the list.
  - `tail`: A pointer to the last node in the list.
- The class includes the following public methods:
  - `IntList()`: Constructor to initialize an empty list.
  - `void push_front(int value)`: Method to insert an element at the front of the list.
  - `int sum() const`: Method to calculate and return the sum of all elements in the list.
- It also contains a private helper method:
  - `int sum(IntNode* curr) const`: A recursive method to calculate the sum of elements starting from a given node.

## Usage

1. Include the necessary header files.
2. Create instances of the `IntList` class.
3. Use the `push_front` method to insert integer elements at the front of the list.
4. Use the `sum` method to calculate the sum of elements in the list.

Compile with:

> g++ main.cpp -o a.exe

## Example

```cpp
IntList list1;
list1.push_front(11);
list1.push_front(8);
list1.push_front(5);
list1.push_front(3);
int sum = list1.sum();
cout << "Sum: " << sum << endl;
```

## Output
```
$ ./a
Sum: 27
Sum: 0 
```