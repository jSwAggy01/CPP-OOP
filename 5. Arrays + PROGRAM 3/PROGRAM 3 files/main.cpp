#include <iostream>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
// Compile with: g++ main.cpp ItemToPurchase.cpp ShoppingCart.cpp -Wall -Wuninitialized -o ./a.exe

using namespace std;

void PrintMenuOnly() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl << endl;
    cout << "Choose an option: ";
    cout << endl; 
}

void PrintMenu(ShoppingCart &customerCart) {
    char userOption;
    string itemName;
    string itemDescription;
    string itemToRemove;
    int itemPrice;
    int itemQuantity;
    int newItemQuantity;

    PrintMenuOnly();

    while (cin >> userOption) {
        if (userOption == 'a') {
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name: " << endl;
            cin.ignore();
            getline(cin, itemName);

            cout << "Enter the item description: " << endl;
            getline(cin, itemDescription);

            cout << "Enter the item price: " << endl;
            cin >> itemPrice;

            cout << "Enter the item quantity: " << endl;
            cin >> itemQuantity;
            cout << endl;

            ItemToPurchase item(itemName, itemDescription, itemPrice, itemQuantity);
            customerCart.addItem(item);

            PrintMenuOnly();
        }
        if (userOption == 'd') {
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove: " << endl;
            cin.ignore();
            getline(cin, itemToRemove);
            customerCart.removeItem(itemToRemove);
            cout << endl;

            PrintMenuOnly();
        }
        if (userOption == 'c') {
            ItemToPurchase newItem;

            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name: " << endl;
            cin.ignore();
            getline(cin, itemName);
            newItem.setName(itemName);

            cout << "Enter the new quantity: " << endl;
            cin >> newItemQuantity;
            newItem.setQuantity(newItemQuantity);

            customerCart.modifyItem(newItem);

            PrintMenuOnly();
        }
        if (userOption == 'i') {
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            customerCart.printDescriptions();
            cout << endl;

            PrintMenuOnly();
        }
        if (userOption == 'o') {
            cout << endl;
            cout << "OUTPUT SHOPPING CART" << endl;
            customerCart.printTotal();
            cout << endl;

            PrintMenuOnly();
        }
        if (userOption == 'q') {
            break;
        }
        if (userOption != 'a' && userOption != 'd' && userOption != 'c' && userOption != 'i' && userOption != 'o' && userOption != 'q') {
            cout << "Choose an option: " << endl;
        }
    }
}

int main() {
    string customerName;
    string date;

    cout << "Enter customer's name: ";
    getline(cin, customerName);
    
    cout << endl;
    cout << "Enter today's date: ";
    getline(cin, date);

    cout << endl << endl;
    cout << "Customer name: " << customerName << endl;
    cout << "Today's date: " << date << endl << endl;

    ShoppingCart customerCart(customerName, date);

    PrintMenu(customerCart);

    return 0;
}