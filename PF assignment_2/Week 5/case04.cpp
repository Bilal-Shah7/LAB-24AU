#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using namespace std;

bool createFile(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error: Unable to create file " << filename << endl;
        return false;
    }
    cout << "File " << filename << " created successfully." << endl;
    return true;
}

bool writeFile(const string& filename, const string& content) {
    ofstream file(filename, ios::app); // Open file in append mode
    if (!file) {
        cout << "Error: Unable to write to file " << filename << endl;
        return false;
    }
    file << content << endl;
    cout << "Content written to " << filename << endl;
    return true;
}

bool deleteFile(const string& filename) {
    if (!filesystem::remove(filename)) {
        cout << "Error: Unable to delete file " << filename << endl;
        return false;
    }
    cout << "File " << filename << " deleted successfully." << endl;
    return true;
}

int main() {
    string filename, content, choice;

    cout << "Welcome to the File Management Application" << endl;

    do {
        cout << "\nMenu:\n";
        cout << "1. Create a file\n2. Write to a file\n3. Delete a file\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == "1") {
            cout << "Enter the file name to create: ";
            cin >> filename;
            createFile(filename);
        } else if (choice == "2") {
            cout << "Enter the file name to write to: ";
            cin >> filename;
            cout << "Enter the content to write: ";
            cin.ignore(); // Ignore leftover newline
            getline(cin, content);
            writeFile(filename, content);
        } else if (choice == "3") {
            cout << "Enter the file name to delete: ";
            cin >> filename;
            deleteFile(filename);
        } else if (choice == "4") {
            cout << "Exiting the application. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (true);

    return 0;
}
