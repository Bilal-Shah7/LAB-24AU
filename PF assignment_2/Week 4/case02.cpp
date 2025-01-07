#include <iostream>
#include <string>
using namespace std;

void displaymenu() {
    cout << "Menu\n";
    cout << "1. Item A - $10\n";
    cout << "2. Item B - $15\n";
    cout << "3. Item C - $20\n";
}

void couponcodes() {
    cout << "Available coupon codes:\n";
    cout << "DISCOUNT10 - 10% off\n";
    cout << "SAVE20 - $20 off\n";
    cout << "FREESHIP - Free shipping\n";
}

bool validatecoupon(const string& coupon) {
    return coupon == "DISCOUNT10" || coupon == "SAVE20" || coupon == "FREESHIP";
}

int main() {
    int choice;
    string coupon;

    cout << "Welcome to Dwatson" << endl;

    do {
        cout << "Choose one" << endl;
        cout << "1. Display Menu\n2. Display Coupon Codes for Discounts\n3. Print Bill and exit store.." << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                displaymenu();
                break;
            case 2:
                couponcodes();
                do {
                    cout << "Enter coupon code: ";
                    cin >> coupon;
                    if (!validatecoupon(coupon)) {
                        cout << "Invalid coupon code. Please try again.\n";
                    }
                } while (!validatecoupon(coupon));
                cout << "Coupon applied successfully: " << coupon << endl;
                break;
            case 3:
                cout << "Printing receipt and exiting store..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
