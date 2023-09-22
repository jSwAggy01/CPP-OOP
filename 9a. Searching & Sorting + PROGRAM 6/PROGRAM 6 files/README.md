# Set Implementation and Testing

## Purpose
The objective of this program was to **implement** and thoroughly **test** the functionality of the IntList class integrated the SortedSet class. The SortedSet class serves as the data structure equivalent of the mathematical set operations. This program is a useful tool for understanding and working with linked lists and sorted sets of integers.


## IntList Program

### Program Overview

This program provides a class for creating and manipulating linked lists of integers. It includes functions for adding elements to the front and back of the list, displaying the list, clearing the list, and performing selection sort on the list.

### Usage

The "IntList" program can be used to create and manipulate linked lists of integers. Here are some of the key operations:

- **Constructor/Destructor**: The program demonstrates the construction and destruction of linked lists.

- **Push Front/Pop Front**: You can add elements to the front of the list using `push_front`, and you can remove elements from the front using `pop_front`.

- **Push Back**: You can add elements to the back of the list using `push_back`.

- **Display**: The program can display the contents of the list.

- **Clear**: You can clear the list using the `clear` function.

- **Copy Constructor and Assignment**: The program demonstrates the use of copy constructors and assignment operators.

- **Selection Sort**: It shows how to sort the list using the selection sort algorithm.

- **Insert Ordered**: You can insert an element into the list while maintaining sorted order using `insert_ordered`.

## SortedSet Program

### Program Overview

This program provides a class for creating and manipulating sorted sets of integers. It includes functions for creating sets, performing set operations (union and intersection), adding elements to sets, and displaying sets.

### Usage

The "SortedSet" program can be used to create and manipulate sorted sets of integers. Here are some of the key operations:

- **Constructor/Destructor**: The program demonstrates the construction and destruction of sorted sets.

- **Add**: You can add elements to a set using the `add` function.

- **Union Operator (|)**: You can perform the union of two sets using the `|` operator.

- **Intersection Operator (&)**: You can perform the intersection of two sets using the `&` operator.

- **Display**: The program can display the contents of a set.

## Compilation:
Compile with:
>   g++ IntList.cpp main.cpp SortedSet.cpp -Wall -Werror -Wuninitialized -o ./a.exe

## Output

```
$ ./a
Beginning IntList tests...

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

Beginning SortedSet tests...

Testing constructor, copy constructor, union(|) operator, intersection(&) operator, add,     

list1 constructor called
pushback 3
pushback 2
pushback 1
pushfront 2
pushfront 3
pushfront 3
list1: 3 3 2 3 2 1
set1 constructor called
copy list1
set1: 1 2 3
set2 constructor called
copy set1
set2: 1 2 3
clear
pushback 9
add 8
pushfront 7
insert 7
Duplicate exists, nothing inserted
set2: 7 9 18
set3 constructor called
set3 = set1 | set2
set3: 1 2 3 7 9 18
set4 constructor called
set4 = set3 & set2
set4: 7 9 18
set5 constructor called
add 4
add 5
add 6
set5: 4 5 6
set5 |= set4
set5: 4 5 6 7 9 18
set5 &= set4
set5:

Calling list destructor(s)...
list destructor(s) returned
Testing intersection(&) operator on empty SortedSet

set1 constructor called
add 1
add 2
add 3
set1: 1 2 3
set2 constructor called
set2 is empty
set3 constructor called
set3 = set1 & set2
set3: 
set3 is empty
set3 &= set2
set3:

Calling list destructor(s)...
list destructor(s) returned
Testing intersection operator
set1 constructor called
add 1
add 2
add 3
set1: 1 2 3
set2 constructor called
add 11
add 12
add 3
set2: 3 11 12
set3 constructor called
set3 = set1 & set2
expecting 3, got 3
list destructor(s) returned
Testing intersection operator with all duplicate values~
set1 constructor called
add 1
add 2
add 3
set1: 1 2 3
set2 constructor called
add 1
add 2
add 3
set2: 1 2 3
set3 constructor called
set3 = set1 & set2
expecting 1 2 3, got 1 2 3
set1 &= set2
expecting 1 2 3, got 1 2 3
set1 &= set1
expecting 1 2 3, got 1 2 3
list destructor(s) returned

Testing completed!
```