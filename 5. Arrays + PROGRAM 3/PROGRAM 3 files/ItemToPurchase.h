#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
using namespace std;

class ItemToPurchase  {
    public:
    // CONSTRUCTORS:
        ItemToPurchase();                                           // default constructor.
        ItemToPurchase(string, string, int, int);                   // item name, item description, item price, and item quantity
    // PUBLIC CLASS FUNCTIONS:
        void setName(string);                                       // mutator
        string name() const;                                        // accessor
        void setPrice(int);                                         // mutator
        int price() const;                                          // accessor
        void setQuantity(int);                                      // mutator
        int quantity() const;                                       // accessor
    // PUBLIC MEMBER FUNCTIONS:
        void setDescription(string);                                // mutator
        string description() const;                                 // accessor
        void printItemCost() const;                                 // Outputs the item name followed by the quantity, price, and subtotal
        // Ex: Bottled Water 10 @ $1 = $10
        void printItemDescription() const;                          // Outputs the item name and description
        // Ex: Bottled Water: Deer Park, 12 oz.
    private:
    // PRIVATE DATA MEMBERS:
        string _name;                                               // Initialized in default constructor to "none"
        int _price;                                                 // Initialized in default constructor to 0
        int _quantity;                                              // Initialized in default constructor to 0
        string _description;                                        // Initialized in default constructor to "none"
};

#endif