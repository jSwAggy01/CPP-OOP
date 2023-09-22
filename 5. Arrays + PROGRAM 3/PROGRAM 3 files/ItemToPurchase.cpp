#include "ItemToPurchase.h"

// CONSTRUCTORS:
    ItemToPurchase::ItemToPurchase() {
        _name = "none";
        _description = "none";
        _price = 0;
        _quantity = 0;
    }

        
    ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) {   // item name, item description, item price, and item quantity
        _name = name;
        _description = description;
        _price = price;
        _quantity = quantity;
    }

// PUBLIC CLASS FUNCTIONS:
    void ItemToPurchase::setName(string name) {
        _name = name;
    }

    string ItemToPurchase::name() const {
        return _name;
    }

    void ItemToPurchase::setPrice(int price) {
        _price = price;
    }

    int ItemToPurchase::price() const {
        return _price;
    }

    void ItemToPurchase::setQuantity(int quantity) {
        _quantity = quantity;
    }

    int ItemToPurchase::quantity() const {
        return _quantity;
    }

// PUBLIC MEMBER FUNCTIONS:
    void ItemToPurchase::setDescription(string description) {
        _description = description;
    }

    string ItemToPurchase::description() const {
        return _description;
    }

    // Outputs the item name followed by the quantity, price, and subtotal
    // Ex: Bottled Water 10 @ $1 = $10        
    void ItemToPurchase::printItemCost() const {
        cout << _name << " " << _quantity << " @ $" << _price << " = $" << _price * _quantity << endl;
    }

    // Outputs the item name and description
    // Ex: Bottled Water: Deer Park, 12 oz.
    void ItemToPurchase::printItemDescription() const {
        cout << _name << ": " << _description << endl;
    }