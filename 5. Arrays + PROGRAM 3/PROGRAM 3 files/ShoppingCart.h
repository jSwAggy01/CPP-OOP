#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <vector>

class ShoppingCart  {
    public:
    // CONSTRUCTORS:
        ShoppingCart();                                     // default constructor
        ShoppingCart(string, string);                       // customer name and date
    private:
    // PRIVATE DATA MEMBERS:
        string _customerName;                               // Initialized in default constructor to "none"
        string _currentDate;                                // Initialized in default constructor to "January 1, 2016"
        vector <ItemToPurchase> _cartItems;                
    public:
    // PUBLIC MEMBER FUNCTIONS:
        string customerName() const;                     // accessor
        string date() const;                             // accessor
        void addItem(ItemToPurchase);                       // Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
        void removeItem(string);
            /*  Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
                If item name cannot be found, output this message: Item not found in cart. Nothing removed.             */

        void modifyItem(ItemToPurchase);
            /*  Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
                If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. If not, modify item in cart.
                If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.   */

        int numItemsInCart() const;                          // Returns quantity of all items in cart. Has no parameters.
        int costOfCart() const;                              // Determines and returns the total cost of items in cart. Has no parameters.
        void printTotal() const;                             // Outputs total of objects in cart. If cart is empty, output this message: SHOPPING CART IS EMPTY
            /*  Ex: John Doe's Shopping Cart - February 1, 2016
                    Number of Items: 8

                    Nike Romaleos 2 @ $189 = $378
                    Chocolate Chips 5 @ $3 = $15
                    Powerbeats 2 Headphones 1 @ $128 = $128

                    Total: $521                                 */

        void printDescriptions() const;                      // Outputs each item's description.
            /* Ex:  John Doe's Shopping Cart - February 1, 2016

                    Item Descriptions
                    Nike Romaleos: Volt color, Weightlifting shoes
                    Chocolate Chips: Semi-sweet
                    Powerbeats 2 Headphones: Bluetooth headphones   */
};

#endif