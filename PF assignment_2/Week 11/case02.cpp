#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    float price;
    int stockLevel;
};

void displayProductInfo(const Product& product) {
    cout << "Product ID: " << product.id << endl;
    cout << "Product Name: " << product.name << endl;
    cout << "Price: $" << product.price << endl;
    cout << "Stock Level: " << product.stockLevel << endl;
}

int main() {
    const int numProducts = 3;
    Product products[numProducts];

    for (int i = 0; i < numProducts; ++i) {
        cout << "Enter product " << i + 1 << " details:" << endl;
        cout << "Enter product ID: ";
        cin >> products[i].id;
        cin.ignore();
        cout << "Enter product name: ";
        getline(cin, products[i].name);
        cout << "Enter product price: ";
        cin >> products[i].price;
        cout << "Enter stock level: ";
        cin >> products[i].stockLevel;
        cout << endl;
    }

    cout << "Product Information:" << endl;
    for (int i = 0; i < numProducts; ++i) {
        displayProductInfo(products[i]);
        cout << endl;
    }

    return 0;
}
