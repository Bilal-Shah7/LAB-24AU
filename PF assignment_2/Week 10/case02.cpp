#include <iostream>
#include <cstring>
using namespace std;

void createDocument(char*& text, int size) {
    // Allocate memory dynamically for the document text
    text = new char[size + 1];  // +1 for null-terminator
}

void editDocument(char* text, const char* newText) {
    // Copy new text into the allocated memory
    strcpy(text, newText);
}

void displayDocument(const char* text) {
    // Display the document content
    cout << "Document Content: " << text << endl;
}

void deleteDocument(char*& text) {
    // Free the dynamically allocated memory
    delete[] text;
    text = nullptr;
}

int main() {
    char* document = nullptr;
    int size;

    cout << "Enter the size of the document: ";
    cin >> size;

    createDocument(document, size);

    cout << "Enter the document text: ";
    cin.ignore();  // To clear the buffer before reading a line
    cin.getline(document, size + 1);  // Reading the input into the allocated memory

    displayDocument(document);

    cout << "Enter new text to edit the document: ";
    cin.getline(document, size + 1);  // Edit the document

    displayDocument(document);

    deleteDocument(document);

    return 0;
}
