#include "ShoppingCart.h"

// CONSTRUCTORS: 
    ShoppingCart::ShoppingCart() {
        _customerName = "none";
        _currentDate = "January 1, 2016";
    }

    ShoppingCart::ShoppingCart(string name, string date) {
        _customerName = name;
        _currentDate = date;
    }

// PUBLIC MEMBER FUNCTIONS:
    string ShoppingCart::customerName() const {
        return _customerName;
    }

    string ShoppingCart::date() const {
        return _currentDate;
    }

    void ShoppingCart::addItem(ItemToPurchase item) {
        _cartItems.push_back(item);
    }

    void ShoppingCart::removeItem(string itemName) {
        unsigned int i;

        for (i = 0; i < _cartItems.size(); ++i) {
            if (_cartItems.at(i).name() == itemName) {
                _cartItems.erase(_cartItems.begin() + i);
                break;
            }
            else if (i == _cartItems.size() - 1) {
                cout << "Item not found in cart. Nothing removed." << endl;
            }
        }
    }

    void ShoppingCart::modifyItem(ItemToPurchase item) {
        unsigned int i;

        // for (i = 0; i < _cartItems.size(); ++i) {
        //     if (item.GetName() == _cartItems.at(i).GetName()) {
        //         if (item.GetDescription() != _cartItems.at(i).GetDescription()) {
        //             item.SetDescription(_cartItems.at(i).GetDescription());
        //         }
        //         if (item.GetPrice() != _cartItems.at(i).GetPrice()) {
        //             item.SetPrice(_cartItems.at(i).GetPrice());
        //         }
        //         if (item.GetQuantity() != _cartItems.at(i).GetQuantity()) {
        //             item.SetQuantity(_cartItems.at(i).GetQuantity());
        //         }
        //         break;
        //     }
        //     else if (i == _cartItems.size() - 1) {
        //         cout << "Item not found in cart. Nothing modified." << endl;
        //     }
        // }

        for (i = 0; i < _cartItems.size(); ++i) {
            if (item.name() == _cartItems.at(i).name()) {
                // if (item.GetDescription() != _cartItems.at(i).GetDescription()) {
                //     _cartItems.at(i).SetDescription(item.GetDescription());
                // }
                // if (item.GetPrice() != _cartItems.at(i).GetPrice()) {
                //     _cartItems.at(i).SetPrice(item.GetPrice());
                // }
                if (item.quantity() != _cartItems.at(i).quantity()) {
                    _cartItems.at(i).setQuantity(item.quantity());
                }
                break;
            }
            else if (i == _cartItems.size() - 1) {
                cout << "Item not found in cart. Nothing modified." << endl << endl;
            }
        }
    }

    int ShoppingCart::numItemsInCart() const {
        unsigned int i;
        int totalItems = 0;

        for (i = 0; i <_cartItems.size(); ++i) {
            totalItems += _cartItems.at(i).quantity();
        }
        
        return totalItems;
    }

    int ShoppingCart::costOfCart() const {
        unsigned int i;
        int totalCost = 0;

        for (i = 0; i < _cartItems.size(); ++i) {
            totalCost += _cartItems.at(i).price() * _cartItems.at(i).quantity();
        }

        return totalCost;
    }

    void ShoppingCart::printTotal() const {
        unsigned int i;

        cout << customerName() << "'s Shopping Cart - " << date() << endl;
        cout << "Number of Items: " << numItemsInCart() << endl << endl;
        
        for (i = 0; i < _cartItems.size(); ++i) {
            _cartItems.at(i).printItemCost();
        }

        if (costOfCart() == 0) {
            cout << "SHOPPING CART IS EMPTY" << endl << endl;
        }
        else {
            cout << endl;
        }

        cout << "Total: $" << costOfCart() << endl;
    }

    void ShoppingCart::printDescriptions() const {
        unsigned int i;

         cout << customerName() << "'s Shopping Cart - " << date() << endl << endl;
         cout << "Item Descriptions" << endl;
        
        for (i = 0; i < _cartItems.size(); ++i) {
            _cartItems.at(i).printItemDescription();
        }
    }