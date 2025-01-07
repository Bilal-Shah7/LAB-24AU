#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

double calculateTransaction(double amount, double rate) {
    if (rate == 0) {
        throw runtime_error("Division by zero error: The rate cannot be zero.");
    }
    return amount / rate;
}

int main() {
    double amount, rate, result;
    string choice;

    cout << "Welcome to the Financial Transaction Processor" << endl;

    do {
        try {
            cout << "Enter the transaction amount: ";
            cin >> amount;
            if (cin.fail()) {
                throw runtime_error("Invalid input: Please enter a numeric value for the amount.");
            }

            cout << "Enter the transaction rate: ";
            cin >> rate;
            if (cin.fail()) {
                throw runtime_error("Invalid input: Please enter a numeric value for the rate.");
            }

            result = calculateTransaction(amount, rate);
            cout << "Transaction result: " << result << endl;
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }

        cout << "Do you want to process another transaction? (yes/no): ";
        cin >> choice;

    } while (choice == "yes");

    cout << "Thank you for using the Financial Transaction Processor. Goodbye!" << endl;

    return 0;
}
