#include "IntList.h"

#include <ostream>

using namespace std;

// Public functions:
   /* Constructor. */
   IntList::IntList() : head(nullptr) {}


   /* Inserts a data value to the front of the list. */
   void IntList::push_front(int val) {
      if (head == nullptr) {
         head = new IntNode(val);
      }
      else {
         IntNode *temp = new IntNode(val);
         temp->next = head;
         head = temp;
      }
   }

   /* Outputs to a single line all of the int values stored in the list, each separated by a space. This function does NOT output a newline or space at
      the end.*/
   ostream & operator<<(ostream &out, const IntList &rhs){
      return operator << (out, rhs.head);
   }

   /* Returns true if the integer passed in is contained within the IntList, otherwise returns false.*/
   bool IntList::exists(int val) const{
      IntNode* curr = head;

      if (exists(curr, val)) {
         return true;
      }
      else {
         return false;
      }
   }

// Private helper functions:
   /* Helper function that returns true if the integer passed in is contained within the IntNodes starting from the IntNode whose address is passed in, 
      otherwise returns false.*/
   bool IntList::exists(IntNode *curr, int val) const{
      bool doesItExist = false;

      if (curr == 0) {
         return false;
      }
      else if (curr->value == val) {
         return true;
      }
      else {
         doesItExist = exists(curr->next, val);
      }
      return doesItExist;
   }

   /* Helper function that passes in the address of a IntNode within an IntList and outputs all of integers within the IntList starting from this IntNode.*/
   ostream & operator<<(ostream &out, IntNode *rhs){
      if (rhs == 0) {
         return out;
      }
      else {
         out << rhs->value;
         if (rhs->next != 0) {
            out << " ";
         }
         operator<<(out, rhs->next);
      }
      return out;
   }
