#include "IntList.h"

void IntList::removeOdds() {
    IntNode *temp;
    
    if (head == nullptr) {
        return;
    }
    while (head->value % 2 != 0) {
        temp = head;
        if (head->next == nullptr) {
            head = nullptr;
            delete temp;
            return;
        }
        head = head->next;
        delete temp;
    }
    
    IntNode *curr = head->next;
    IntNode *prev = head;

    while (curr != nullptr) {
        if (curr->value % 2 != 0) {
            temp = curr;
            curr = curr->next;
            delete temp;
            prev->next = curr;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }
}