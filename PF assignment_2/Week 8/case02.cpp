#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTS = 10;  // Maximum number of products in inventory

struct Product {
    string name;
    int quantity;
};

void addProduct(Product inventory[], int &numProducts) {
    if (numProducts >= MAX_PRODUCTS) {
        cout << "Inventory is full! Cannot add more products." << endl;
        return;
    }
    
    cout << "Enter product name: ";
    cin >> inventory[numProducts].name;
    
    cout << "Enter quantity for " << inventory[numProducts].name << ": ";
    cin >> inventory[numProducts].quantity;
    
    numProducts++;
    cout << "Product added successfully!" << endl;
}

void updateStock(Product inventory[], int numProducts) {
    string productName;
    int newQuantity;

    cout << "Enter product name to update stock: ";
    cin >> productName;
    
    bool found = false;
    for (int i = 0; i < numProducts; ++i) {
        if (inventory[i].name == productName) {
            cout << "Enter new quantity for " << productName << ": ";
            cin >> newQuantity;
            inventory[i].quantity = newQuantity;
            found = true;
            cout << "Stock updated for " << productName << "." << endl;
            break;
        }
    }
    
    if (!found) {
        cout << "Product not found in inventory." << endl;
    }
}

void removeProduct(Product inventory[], int &numProducts) {
    string productName;

    cout << "Enter product name to remove: ";
    cin >> productName;

    bool found = false;
    for (int i = 0; i < numProducts; ++i) {
        if (inventory[i].name == productName) {
            // Shift the remaining products to remove the product
            for (int j = i; j < numProducts - 1; ++j) {
                inventory[j] = inventory[j + 1];
            }
            numProducts--;
            found = true;
            cout << productName << " removed from inventory." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Product not found in inventory." << endl;
    }
}

void viewInventory(Product inventory[], int numProducts) {
    if (numProducts == 0) {
        cout << "Inventory is empty!" << endl;
        return;
    }
    
    cout << "\nCurrent Inventory:\n";
    for (int i = 0; i < numProducts; ++i) {
        cout << "Product Name: " << inventory[i].name << ", Quantity: " << inventory[i].quantity << endl;
    }
}

int main() {
    Product inventory[MAX_PRODUCTS];
    int numProducts = 0;  // Number of products in the inventory
    int choice;

    do {
        cout << "\nInventory Management System" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Update Stock" << endl;
        cout << "3. Remove Product" << endl;
        cout << "4. View Inventory" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct(inventory, numProducts);
                break;
            case 2:
                updateStock(inventory, numProducts);
                break;
            case 3:
                removeProduct(inventory, numProducts);
                break;
            case 4:
                viewInventory(inventory, numProducts);
                break;
            case 5:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
