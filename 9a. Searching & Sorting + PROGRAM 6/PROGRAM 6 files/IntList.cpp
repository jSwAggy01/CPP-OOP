#include "IntList.h"

/* Initializes an empty list */
IntList::IntList() {
    head = nullptr;
    tail = nullptr;
}

/* the copy constructor. Make sure this performs deep copy */
IntList::IntList(const IntList &cpy) {
    IntNode *curr = cpy.head;
    head = nullptr;
    tail = nullptr;
    
    while (curr != nullptr) {
        push_back(curr->value);
        curr = curr->next;
    }
}

/* the overloaded assignment operator. Make sure this performs deep copy */
IntList & IntList::operator=(const IntList &cpy) {
    IntNode *curr = cpy.head;

    if (this != &cpy) {
        clear();
        while (curr != nullptr) {
            push_back(curr->value);
            curr = curr->next;
        }
    }

    return *this;
}

/* Deallocates all remaining dynamically allocated memory (all remaining IntNodes) */
IntList::~IntList() {
    IntNode* curr = head;
    IntNode* next;
    
    while (curr != nullptr) {
        next = curr->next;
        delete curr;
        curr = next;
    }
    
    head = nullptr;
    tail = nullptr;
}

/* Returns a reference to the first value in the list. Calling this on an empty list causes undefined behavior */
const int & IntList::front() const {
    return head->value;
}

/* Returns a reference to the last value in the list. Calling this on an empty list causes undefined behavior */
const int & IntList::back() const {
    return tail->value;
}

/* Returns true if the list does not store any data values (does not have any nodes), otherwise returns false */
bool IntList::empty() const {
    if (head == nullptr) {
        return true;
    }

    return false;
}

/* Inserts a data value (within a new node) at the front end of the list */
void IntList::push_front(int val) {
    if (head == nullptr) {
        head = tail = new IntNode(val);
    }
    else {
        IntNode *curr = new IntNode(val);
        curr->next = head;
        head = curr;
    }
}

/* Inserts a data value (within a new node) at the back end of the list */
void IntList::push_back(int value) {
    if (tail == nullptr) {
        tail = head = new IntNode(value);
    }
    else {
        IntNode *curr = new IntNode(value);
        tail->next = curr;
        tail = curr;
    }
}

/* Removes the value (actually removes the node that contains the value) at the front end of the list. Does nothing if the list is already empty */
void IntList::pop_front() {
    if (!empty()) {
        IntNode *temp = head;
        head = head->next;
        delete temp;
    }
    else if (head == tail) {
        delete head;
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
}

/* Sorts the integers in the list into ascending order. Do NOT move the nodes, just the integers */
void IntList::selection_sort() {
    IntNode* curr = head;
    IntNode* next = curr;
    int temp;

    while (curr != nullptr) {
        while (next != nullptr) {
            if (next->value < curr->value) {
                temp = curr->value;
                curr->value = next->value;
                next->value = temp;
            }
            next = next->next;
        }
        curr = curr->next;
        next = curr;
    }
}

/*  Inserts a data value (within a new node) in an ordered list. Assumes the list is already sorted in ascending 
    order (i.e., Do not sort the list first, assume the list is already is sorted.) This function loops through the 
    list until if finds the correct position for the new data value and then inserts the new IntNode in that location. 
    This function may NOT ever sort the list. */
void IntList::insert_ordered(int value) {
    IntNode* curr = head;
    IntNode* next;

    if (empty()) {
            push_back(value);
    }
    else if (value < head->value) {
        push_front(value);
    }
    else if (value > tail->value) {
        push_back(value);
    }
    else if (curr != nullptr) {
        next = curr->next;
        while (curr != nullptr) {
            if (value >= curr->value && value <= next->value) {
                IntNode* temp = new IntNode(value);
                curr->next = temp;
                temp->next = next;
                break;
            }
            curr = curr->next;
            next = curr->next;
        }
    }
}

/*  Removes all duplicate data values (actually removes the nodes that contain the values) within the list. Always remove 
    just the later value within the list when a duplicate is found. This function may NOT ever sort the list. */
void IntList::remove_duplicates() {
    if (!empty()) {
        IntNode* prev = nullptr;
        
        for (IntNode* i = head; i != nullptr; i = i->next) {
            prev = i;
            for (IntNode* j = i->next; j != nullptr; j = prev->next) {
                if (i->value == j->value) {
                    if (j == tail) {
                        delete j;
                        tail = prev;
                        tail->next = 0;
                        if (head == tail) {
                            break;
                        }
                    }
                    else {
                        prev->next = j->next;
                        delete j;
                    }
                }
                else {
                    prev = prev->next;
                }
            }
        }
    }
}

/*  Removes (deallocates) all IntNodes in the IntList. Don't forget to set both head and tail to appropriate values for 
    an empty list. DO NOT leave them dangling! */
void IntList::clear() {
    IntNode* curr = head;
    IntNode* next;
    
    while (curr != nullptr) {
        next = curr->next;
        delete curr;
        curr = next;
    }
    
    head = nullptr;
    tail = nullptr;
}

/*  A global friend function that outputs to the stream all of the integer values within the list on a single line, 
    each separated by a space. This function does NOT send to the stream a newline or space at the end */
ostream & operator<<(ostream &output, const IntList &list) {
    IntNode *curr = list.head;  

    while (curr != nullptr) {
        output << curr->value;
        curr = curr->next;
        if (curr != nullptr) {
            output << " ";
        }
    }

    return output;
}

/* Used by selection_sort function. Just have this function return nullptr if you don't use this function. */
IntNode * IntList::min(IntNode *) {
    return nullptr;
}
	
/* Used by copy constructor and/or copy assignment operator. Just implement an empty function if you don't use this function. */
void IntList::copy(const IntList &) {
    
}
