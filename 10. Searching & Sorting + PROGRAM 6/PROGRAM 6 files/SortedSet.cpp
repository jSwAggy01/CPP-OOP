#include "SortedSet.h"

/* The default constructor initializes an empty set. */
SortedSet::SortedSet() : IntList() {}

/* The copy constructor initializes the set to be a copy of the set passed in. Use the IntList copy constructor. */
SortedSet::SortedSet(const SortedSet &cpy) : IntList(cpy) {}

/*  A constructor that is passed an IntList instead of a SortedSet. It should initialize the set using the values in 
    the IntList. Again, you can use the IntList copy constructor and then remove all of the duplicates and sort the remaining values. */
SortedSet::SortedSet(const IntList &list) : IntList(list) {
    remove_duplicates();
    selection_sort();
}

/*  The destructor needs to deallocate all dynamically allocated memory that the IntList destructor will not already deallocate. You 
    may very well find that this function does not need to do anything. */
SortedSet::~SortedSet() {}

/*  This function returns true if the value passed in is a member of the set, otherwise false. */
bool SortedSet::in(int value) {
    IntNode* curr = head;

    while (curr != nullptr) {
        if (curr->value == value) {
            return true;
        }
        curr = curr -> next;
    }
    
    return false;
}

/*  This function returns a SortedSet object that is the union of 2 SortedSet objects, the left and right operands of this binary operator.
    A union of 2 sets is a set that consists of all of the DISTINCT elements of both sets combined. That is, all of the values that are in
    the left operand or in the right operand are in both operands. 
    Ex: sset1 = sset2 | sset3; */
SortedSet SortedSet::operator|(const SortedSet &rhs) {
    SortedSet set;

    for (IntNode* curr = rhs.head; curr != nullptr; curr = curr->next) {
        set.push_back(curr->value);
    }

    for (IntNode* curr = head; curr != nullptr; curr = curr->next) {
        set.push_back(curr->value);
    }
    
    set.remove_duplicates();
    set.selection_sort();

    return set;
}

/*  This function returns a SortedSet object that is the intersection of 2 SortedSet objects, the left and right operands of this binary
    operator. An intersection of 2 sets is a set of all elements that are in both sets. That is, all of the values that are both in the left
    operand and in the right operand. 
    Ex: sset1 = sset2 & sset3; */
SortedSet SortedSet::operator&(const SortedSet &rhs) {
    SortedSet set;

    for (IntNode* curr = head; curr != nullptr; curr = curr->next) {
        for (IntNode* temp = rhs.head; temp != nullptr; temp = temp->next) {
            if (curr->value == temp->value) {
                set.IntList::push_back(curr->value);
            }
        }
    }

    set.selection_sort();

    return set;
}

/*  This function adds the value passed in to the set. It needs to make sure the value does not already exist in the set (no duplicates) and
    that it is inserted in the proper position (in ascending order). */
void SortedSet::add(int value) {
    bool noDuplicateExists = true;


    for (IntNode* curr = head; curr != nullptr; curr = curr->next) {
        if (curr->value == value) {
            noDuplicateExists = false;
            break;
        }
    }

    if (noDuplicateExists) {
        IntList::insert_ordered(value);
    }
    else {
        cout << "Duplicate exists, nothing inserted" << endl;
    }
}

/*  Override this function so that it inserts the value in the proper position (in ascending order) only if the value does not already exist
    in the set (no duplicates). */
void SortedSet::push_front(int value) {
    add(value);
}

/*  Override this function so that it inserts the value in the proper position (in ascending order) only if the value does not already exist
    in the set (no duplicates). */
void SortedSet::push_back(int value) {
    add(value);
}

/* Override this function so that it does not insert duplicates. */
void SortedSet::insert_ordered(int value) {
    add(value);
}

/*  This function is the union-assign operator function. It returns a union of the left and right operands, but also sets the left operand's
    value to be that union as well. In other words, sset1 |= sset2 is equivalent to sset1 = sset1 | sset2. */
SortedSet SortedSet::operator|=(const SortedSet &rhs) {
    for (IntNode* curr = rhs.head; curr != nullptr; curr = curr->next) {
        this->push_back(curr->value);
    }
    return *this;
}

/*  This function is the intersection-assign operator function. It returns an intersection of the left and right operands, but also sets the 
    left operand's value to be that intersection as well. In other words, sset1 &= sset2 is equivalent to sset1 = sset1 & sset2. */
SortedSet SortedSet::operator&=(const SortedSet &rhs) {
    IntNode* temp = head;

    // In the case of self-assignment:
    if (this == &rhs) {
        return *this;
    }

    // Manually clear b/c I can't auto clear() it for some reason >:(
    head = new IntNode(0);
    head = nullptr;
    tail = nullptr;

    for (IntNode* curr = rhs.head; curr!= nullptr; curr = curr->next) {
        if (temp == nullptr) {
            break;
        }
        if (temp->value == curr->value) {
            push_back(curr->value);
        }
        temp = temp->next;
    }

    return *this;
}
