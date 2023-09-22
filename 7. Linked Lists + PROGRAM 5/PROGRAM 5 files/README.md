# Doubly Linked List Implementation

## Purpose
This objective of this program was simply to implement a doubly linked list from scratch, where the main is just used to rigorously and thouroughly test its functionality.

## Class Functions:

### Constructor & Destructor:

- IntList(): Initializes an empty linked list.
- ~IntList(): Deallocates all dynamically allocated memory (IntNodes) in the list when the list is destroyed.

### List Manipulation:

- push_front(int val): Inserts a new node with the given value at the front of the list.
- pop_front(): Removes the node at the front of the list.
- push_back(int value): Inserts a new node with the given value at the back of the list.
- clear(): Removes (deallocates) all nodes in the list and sets both head and tail to null, effectively clearing the list.

### Accessors:

- empty() const: Returns true if the list is empty (has no nodes), otherwise returns false.
- front() const: Returns a reference to the first value in the list (head's value).
- back() const: Returns a reference to the last value in the list (tail's value).

### Sorting and Insertion:

- selection_sort(): Sorts the integers in the list into ascending order without moving the nodes, only the integers.
- insert_ordered(int value): Inserts a new node with the given value into a list that is already sorted in ascending order. It loops through - the list to find the correct position for insertion.

### Duplicates Removal:

- remove_duplicates(): Removes all duplicate values within the list. It iterates through the list and removes the later occurrence of a duplicated value.

### Friend Function:

- operator<<: Overloads the output stream operator to allow printing the list's contents.

## Conclusion
This code provides a robust implementation of a singly linked list with various operations for manipulating the list and its contents. It also ensures proper memory management through constructors and destructors, including deep copying for the copy constructor and the overloaded assignment operator. The program provides various methods for manipulating, accessing, and modifying the linked list of integers.