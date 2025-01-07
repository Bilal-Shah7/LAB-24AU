#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

void searchStudentById(const Student students[], int size, int searchId) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (students[i].id == searchId) {
            cout << "Student found: ID: " << students[i].id << ", Name: " << students[i].name << ", Grade: " << students[i].grade << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with ID " << searchId << " not found." << endl;
    }
}

int main() {
    Student students[] = {
        {101, "Alice", 90.5},
        {102, "Bob", 85.3},
        {103, "Charlie", 88.7},
        {104, "David", 92.0}
    };
    int size = sizeof(students) / sizeof(students[0]);
    int searchId;

    cout << "Enter student ID to search: ";
    cin >> searchId;

    searchStudentById(students, size, searchId);

    return 0;
}
