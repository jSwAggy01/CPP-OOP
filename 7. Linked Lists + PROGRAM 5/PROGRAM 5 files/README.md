# Singly Linked List Implementation and Testing

## Purpose
The objective of this program was simply to implement a linked list from scratch, where the `main.cpp` is just used to rigorously and thouroughly test its functionality. This code provides a robust implementation of a singly linked list with various operations for manipulating the list and its contents. It ensures proper memory management through constructors and destructors, including deep copying for the copy constructor and the overloaded assignment operator. Also, it provides various methods for manipulating, accessing, and modifying the linked list of integers.

## Class Functions:

### Constructor & Destructor:

- `IntList()`: Initializes an empty linked list.
- `~IntList()`: Deallocates all dynamically allocated memory (IntNodes) in the list when the list is destroyed.

### List Manipulation:

- `push_front(int val)`: Inserts a new node with the given value at the front of the list.
- `pop_front()`: Removes the node at the front of the list.
- `push_back(int value)`: Inserts a new node with the given value at the back of the list.
- `clear()`: Removes (deallocates) all nodes in the list and sets both head and tail to null, effectively clearing the list.

### Accessors:

- `empty() const`: Returns true if the list is empty (has no nodes), otherwise returns false.
- `front() const`: Returns a reference to the first value in the list (head's value).
- `back() const`: Returns a reference to the last value in the list (tail's value).

### Sorting and Insertion:

- `selection_sort()`: Sorts the integers in the list into ascending order without moving the nodes, only the integers.
- `insert_ordered(int value)`: Inserts a new node with the given value into a list that is already sorted in ascending order. It loops through - the list to find the correct position for insertion.

### Duplicates Removal:

- `remove_duplicates()`: Removes all duplicate values within the list. It iterates through the list and removes the later occurrence of a duplicated value.

### Friend Function:

- `operator<<`: Overloads the output stream operator to allow printing the list's contents.

## Compilation
Compile with:
>   g++ main.cpp IntList.cpp -o a.exe

## Output Sample
```
$ ./a
Beginning my tests...

Testing constructor, destructor, push_front, pop_front, display

list1 constructor called
pushfront 10
pushfront 20
pushfront 30
list1: 30 20 10
pop
list1: 20 10
pop
list1: 10
pop
list1:
pushfront 100
pushfront 200
pushfront 300
list1: 300 200 100

Calling list1 destructor...
list1 destructor returned

Testing destructor on empty IntList

Calling list2 destructor...
list2 destructor returned

Testing push_back, clear, copy constructor, copy assignment operator, selection_sort, insert_ordered

list3 constructor called
pushback 10
pushback 20
pushback 30
list3: 10 20 30
copy constructor
list4: 10 20 30
clear
list4:
copy operator
list4: 10 20 30
pushback 70
pushback 40
pushback 60
pushback 50
list4: 10 20 30 70 40 60 50
sort
list4: 10 20 30 40 50 60 70
insert 65
insert 5
insert 90
list4: 5 10 20 30 40 50 60 65 70 90

Calling list destructor(s)...
list destructor(s) returned

Testing completed!
Beginning vanilla tests...
Enter a test number(1-5): 1


list1 constructor called
pushfront 10
pushfront 20
pushfront 30
list1: 30 20 10
pop
list1: 20 10
pop
list1: 10
pop
list1:
list1 destructor called

Testing completed!
```