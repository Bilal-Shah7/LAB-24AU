#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void convertToUpper(string& str) {
    for (char& c : str) {
        c = toupper(c);
    }
}

void convertToLower(string& str) {
    for (char& c : str) {
        c = tolower(c);
    }
}

void displayString(const string& str) {
    cout << "Processed String: " << str << endl;
}

int main() {
    string inputStr;
    int choice;

    cout << "Enter a string: ";
    getline(cin, inputStr);

    cout << "Choose an operation:\n";
    cout << "1. Convert to Uppercase\n";
    cout << "2. Convert to Lowercase\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            convertToUpper(inputStr);
            break;
        case 2:
            convertToLower(inputStr);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    displayString(inputStr);

    return 0;
}
