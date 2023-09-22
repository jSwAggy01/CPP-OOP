#include "IntList.h"
#include "SortedSet.h"

#include <iostream>
using namespace std;
// Compile with: g++ IntList.cpp main.cpp SortedSet.cpp -Wall -Werror -Wuninitialized -o ./a.exe

int main() {

   cout << "Beginning IntList tests...\n" << endl;
   
   cout << "Testing constructor, destructor, push_front, pop_front, display" << endl;

   {
      cout << "\nlist1 constructor called" << endl;
      IntList list1;
      cout << "pushfront 10" << endl;
      list1.push_front(10);
      cout << "pushfront 20" << endl;
      list1.push_front(20);
      cout << "pushfront 30" << endl;
      list1.push_front(30);
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pushfront 100" << endl;
      list1.push_front(100);
      cout << "pushfront 200" << endl;
      list1.push_front(200);
      cout << "pushfront 300" << endl;
      list1.push_front(300);
      cout << "list1: " << list1 << endl;
      cout << endl;
      cout << "Calling list1 destructor..." << endl;
   }
   cout << "list1 destructor returned\n" << endl;
   
   cout << "Testing destructor on empty IntList\n" << endl;
   {
      IntList list2;
      cout << "Calling list2 destructor..." << endl;
   }
   cout << "list2 destructor returned\n" << endl;

   cout << "Testing push_back, clear, copy constructor, copy assignment operator, selection_sort, insert_ordered" << endl;

   {
      cout << "\nlist3 constructor called" << endl;
      IntList list3;
      cout << "pushback 10" << endl;
      list3.push_back(10);
      cout << "pushback 20" << endl;
      list3.push_back(20);
      cout << "pushback 30" << endl;
      list3.push_back(30);
      cout << "list3: " << list3 << endl;
      cout << "copy constructor" << endl;
      IntList list4(list3);
      cout << "list4: " << list4 << endl;
      cout << "clear" << endl;
      list4.clear();
      cout << "list4: " << list4 << endl;
      cout << "copy operator" << endl;
      list4 = list3;
      cout << "list4: " << list4 << endl;
      cout << "pushback 70" << endl;
      list4.push_back(70);
      cout << "pushback 40" << endl;
      list4.push_back(40);
      cout << "pushback 60" << endl;
      list4.push_back(60);
      cout << "pushback 50" << endl;
      list4.push_back(50);
      cout << "list4: " << list4 << endl;
      cout << "sort" << endl;
      list4.selection_sort();
      cout << "list4: " << list4 << endl;
      cout << "insert 65" << endl;
      list4.insert_ordered(65);
      cout << "insert 5" << endl;
      list4.insert_ordered(5);
      cout << "insert 90" << endl;
      list4.insert_ordered(90);
      cout << "list4: " << list4 << endl;
      cout << endl;
      cout << "Calling list destructor(s)..." << endl;
   }
   cout << "list destructor(s) returned" << endl;
   
   cout << "\nBeginning SortedSet tests...\n" << endl;

   cout << "Testing constructor, copy constructor, union(|) operator, intersection(&) operator, add, " << endl;

   {
      cout << "\nlist1 constructor called" << endl;
      IntList list1;
      cout << "pushback 3" << endl;
      list1.push_back(3);
      cout << "pushback 2" << endl;
      list1.push_back(2);
      cout << "pushback 1" << endl;
      list1.push_back(1);
      cout << "pushfront 2" << endl;
      list1.push_front(2);
      cout << "pushfront 3" << endl;
      list1.push_front(3);
      cout << "pushfront 3" << endl;
      list1.push_front(3);
      cout << "list1: " << list1 << endl;
      cout << "set1 constructor called" << endl;
      cout << "copy list1" << endl;
      SortedSet set1(list1);
      cout << "set1: " << set1 << endl;
      cout << "set2 constructor called" << endl;
      cout << "copy set1" << endl;
      SortedSet set2(set1);
      cout << "set2: " << set2 << endl;
      cout << "clear" << endl;
      set2.clear();
      cout << "pushback 9" << endl;
      set2.push_back(9);
      cout << "add 8" << endl;
      set2.add(18);
      cout << "pushfront 7" << endl;
      set2.push_front(7);
      cout << "insert 7" << endl;
      set2.insert_ordered(7);
      cout << "set2: " << set2 << endl;
      cout << "set3 constructor called" << endl;
      cout << "set3 = set1 | set2" << endl;
      SortedSet set3 = set1 | set2;
      cout << "set3: " << set3 << endl;
      cout << "set4 constructor called" << endl;
      cout << "set4 = set3 & set2" << endl;
      SortedSet set4 = set3 & set2;
      cout << "set4: " << set4 << endl;
      cout << "set5 constructor called" << endl;
      SortedSet set5;
      cout << "add 4" << endl;
      set5.add(4);
      cout << "add 5" << endl;
      set5.add(5);
      cout << "add 6" << endl;
      set5.add(6);
      cout << "set5: " << set5 << endl;
      cout << "set5 |= set4" << endl;
      set5 |= set4;
      cout << "set5: " << set5 << endl;
      cout << "set5 &= set4" << endl;
      set5 &= set4;
      cout << "set5: " << set5 << endl;
      cout << endl;
      cout << "Calling list destructor(s)..." << endl;
   }
   cout << "list destructor(s) returned" << endl;

   cout << "Testing intersection(&) operator on empty SortedSet\n" << endl;
   {
      cout << "set1 constructor called" << endl;
      SortedSet set1;
      cout << "add 1" << endl;
      set1.add(1);
      cout << "add 2" << endl;
      set1.add(2);
      cout << "add 3" << endl;
      set1.add(3);
      cout << "set1: " << set1 << endl;
      cout << "set2 constructor called" << endl;
      SortedSet set2;
      if (set2.empty()) {
         cout << "set2 is empty" << endl;
      }
      else {
         cout << "set2 is NOT empty" << endl;
      }
      cout << "set3 constructor called" << endl;
      SortedSet set3;
      cout << "set3 = set1 & set2" << endl;
      set3 = set1 & set2;
      cout << "set3: " << set3 << endl;
      if (set3.empty()) {
         cout << "set3 is empty" << endl;
      }
      else {
         cout << "set3 is NOT empty" << endl;
      }
      cout << "set3 &= set2" << endl;
      set3 &= set2;
      cout << "set3: " << set3 << endl;
      cout << endl;
      cout << "Calling list destructor(s)..." << endl;
   }
   cout << "list destructor(s) returned" << endl;

   cout << "Testing intersection operator" << endl;
   {
      cout << "set1 constructor called" << endl;
      SortedSet set1;
      cout << "add 1" << endl;
      set1.add(1);
      cout << "add 2" << endl;
      set1.add(2);
      cout << "add 3" << endl;
      set1.add(3);
      cout << "set1: " << set1 << endl;
      cout << "set2 constructor called" << endl;
      SortedSet set2;
      cout << "add 11" << endl;
      set2.add(11);
      cout << "add 12" << endl;
      set2.add(12);
      cout << "add 3" << endl;
      set2.add(3);
      cout << "set2: " << set2 << endl;
      cout << "set3 constructor called" << endl;
      SortedSet set3;
      cout << "set3 = set1 & set2" << endl;
      set3 = set1 & set2;
      cout << "expecting 3, got " << set3 << endl;
   }
   cout << "list destructor(s) returned" << endl;

   cout << "Testing intersection operator with all duplicate values~" << endl;
   {
      cout << "set1 constructor called" << endl;
      SortedSet set1;
      cout << "add 1" << endl;
      set1.add(1);
      cout << "add 2" << endl;
      set1.add(2);
      cout << "add 3" << endl;
      set1.add(3);
      cout << "set1: " << set1 << endl;
      cout << "set2 constructor called" << endl;
      SortedSet set2;
      cout << "add 1" << endl;
      set2.add(1);
      cout << "add 2" << endl;
      set2.add(2);
      cout << "add 3" << endl;
      set2.add(3);
      cout << "set2: " << set2 << endl;
      cout << "set3 constructor called" << endl;
      SortedSet set3;
      cout << "set3 = set1 & set2" << endl;
      set3 = set1 & set2;
      cout << "expecting 1 2 3, got " << set3 << endl;
      cout << "set1 &= set2" << endl;
      set1 &= set2;
      cout << "expecting 1 2 3, got " << set1 << endl;
      cout << "set1 &= set1" << endl;
      set1 &= set1;
      cout << "expecting 1 2 3, got " << set1 << endl;
   }
   cout << "list destructor(s) returned" << endl;

   cout << "\nTesting completed!" << endl;

   return 0;
}

// Compile with: g++ IntList.cpp main.cpp SortedSet.cpp -Wall -Werror -Wuninitialized -o ./a.exe