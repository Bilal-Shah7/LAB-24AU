#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phoneNumber;
};

void addContact(Contact contacts[], int& count) {
    cout << "Enter contact name: ";
    cin.ignore();
    getline(cin, contacts[count].name);
    cout << "Enter contact phone number: ";
    getline(cin, contacts[count].phoneNumber);
    count++;
}

void displayContacts(const Contact contacts[], int count) {
    if (count == 0) {
        cout << "No contacts available." << endl;
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "Name: " << contacts[i].name << ", Phone Number: " << contacts[i].phoneNumber << endl;
    }
}

void searchContact(const Contact contacts[], int count, const string& searchName) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (contacts[i].name == searchName) {
            cout << "Found contact: Name: " << contacts[i].name << ", Phone Number: " << contacts[i].phoneNumber << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void sortContacts(Contact contacts[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (contacts[i].name > contacts[j].name) {
                swap(contacts[i], contacts[j]);
            }
        }
    }
}

int main() {
    Contact contacts[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\nPhonebook Application\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Sort Contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact(contacts, count);
                break;
            case 2:
                displayContacts(contacts, count);
                break;
            case 3: {
                string searchName;
                cout << "Enter name to search: ";
                cin.ignore();
                getline(cin, searchName);
                searchContact(contacts, count, searchName);
                break;
            }
            case 4:
                sortContacts(contacts, count);
                cout << "Contacts sorted." << endl;
                break;
            case 5:
                cout << "Exiting phonebook." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
