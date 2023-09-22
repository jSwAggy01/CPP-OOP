#include "IntList.h"

IntList::IntList() {
    head = nullptr;
    tail = nullptr;
}

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

void IntList::pop_front() {
    if (head == tail) {
        delete head;
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
    else {
        IntNode *temp = head;
        head = head->next;
        delete temp;
    }
}

bool IntList::empty() const {
    if (head == nullptr) {
        return true;
    }

    return false;
}

const int & IntList::front() const {
    return head->value;
}

const int & IntList::back() const {
    return tail->value;
}

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