#include <iostream>

using namespace std;

struct IntNode {
    int data;
    IntNode *next;
    IntNode(int data) : data(data), next(nullptr) {}
};

class IntList {
  private:
    IntNode *head;
    IntNode *tail;
  public:
    IntList();
    void push_front(int value);
    int sum() const;
  private:
    int sum(IntNode*) const;
};

IntList::IntList() : head(nullptr), tail(nullptr) {}

void IntList::push_front(int value) {
    IntNode *nn = new IntNode(value);
    nn->next = head;
    head = nn;
    if (!tail) {
        tail = head;
    }
}

int IntList::sum() const {
    return sum(head);
}

int IntList::sum(IntNode* curr) const {
    int total = 0;

    if (curr == nullptr) {
        return total;
    }

    total = curr->data + sum(curr->next);

    return total;
}

int main() {
    
    IntList list1;
    list1.push_front(11);
    list1.push_front(8);
    list1.push_front(5);
    list1.push_front(3);
    
    int sum = list1.sum();
    cout << "Sum: " << sum << endl;

    IntList list2;
    sum = list2.sum();
    cout << "Sum: " << sum << endl;

    return 0;
}
