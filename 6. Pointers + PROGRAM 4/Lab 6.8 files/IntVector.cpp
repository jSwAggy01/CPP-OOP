#include "IntVector.h"

/* Sets both the size and capacity of the IntVector to the value of the parameter passed in and dynamically allocates an array of 
that size as well. However, if the capacity is 0, then there is no array. Make sure you do not leave a dangling pointer. This 
function should initialize all elements (if any) of the array to the value of the 2nd parameter. */
IntVector::IntVector(unsigned capacity, int value) {
    _capacity = capacity;
    _size = _capacity;
    _data = new int[_capacity];

    for (unsigned int i = 0; i < _size; ++i) {
        _data[i] = value;
        //cout << _data[i] << " ";    // FIXME!
    }
    //cout << endl;   // FIXME!
}
            
/* The destructor is used to clean up (delete) any remaining dynamically-allocated memory. For this class, that will be the array 
pointed to by the int pointer named _data. */
IntVector::~IntVector() {
    delete [] _data;
    _data = nullptr;
}

/* This function returns the current SIZE (NOT THE CAPACITY) of the IntVector object, which is the values stored in the _size member variable. */
unsigned IntVector::size() const {
    return _size;
}

/* This function returns the current CAPACITY (NOT THE SIZE) of the IntVector object, which is the value stored in the _capacity member variable. */
unsigned IntVector::capacity() const {
    return _capacity;
}

/* Returns whether the IntVector is empty (_size is 0). */
bool IntVector::empty() const {
    if (_size == 0) {
        return true;
    }
    return false;
}

/* This function will return the value stored in the element at the passed in index position. Your function should throw an outofrange exception 
if an invalid index is passed in. An invalid index is an index greater than or equal to the size. */
const int & IntVector::at(unsigned index) const {
    for (unsigned int i = 0; i < _size; ++i) {
        if (i == index) {
            return _data[i];
        }
    }
    throw out_of_range("IntVector::at_range_check");
    abort();
}

/* This function will return the value stored in the first element of the IntVector. This function does not check the size of the IntVector or the 
array. If the IntVector is empty then calling this function causes undefined behavior. */
const int & IntVector::front() const {
    return _data[0];
}

/* This function will return the value stored in the last element of the IntVector. This function does not check the size of the IntVector or the 
array. If the IntVector is empty then calling this function causes undefined behavior. */
const int & IntVector::back() const {
    return _data[_size - 1];
}