#ifndef INTVECTOR_H
#define INTVECTOR_H

#include <iostream>
#include <stdexcept>
using namespace std;

class IntVector {
    private:
        unsigned _size;         // stores the size of the IntVector (the number of elements currently being used to store the user's values).
        unsigned _capacity;     // store the size of the array (therefore must always be >= to _size).
        int *_data;             // a pointer that stores the address of the dynamically-allocated array of integers
    public:
        /* Sets both the size and capacity of the IntVector to the value of the parameter passed in and dynamically allocates an array of 
        that size as well. However, if the capacity is 0, then there is no array. Make sure you do not leave a dangling pointer. This 
        function should initialize all elements (if any) of the array to the value of the 2nd parameter. */
        IntVector(unsigned capacity = 0, int value = 0);
            
        /* The destructor is used to clean up (delete) any remaining dynamically-allocated memory. For this class, that will be the array 
        pointed to by the int pointer named _data. */
        ~IntVector();

        /* This function returns the current SIZE (NOT THE CAPACITY) of the IntVector object, which is the values stored in the _size member variable. */
        unsigned size() const;

        /* This function returns the current CAPACITY (NOT THE SIZE) of the IntVector object, which is the value stored in the _capacity member variable. */
        unsigned capacity() const;

        /* Returns whether the IntVector is empty (_size is 0). */
        bool empty() const;

        /* This function will return the value stored in the element at the passed in index position. Your function should throw an outofrange exception 
        if an invalid index is passed in. An invalid index is an index greater than or equal to the size. */
        const int & at(unsigned index) const;

        /* This function will return the value stored in the first element of the IntVector. This function does not check the size of the IntVector or the 
        array. If the IntVector is empty then calling this function causes undefined behavior. */
        const int & front() const;

        /* This function will return the value stored in the last element of the IntVector. This function does not check the size of the IntVector or the 
        array. If the IntVector is empty then calling this function causes undefined behavior. */
        const int & back() const;
};

#endif