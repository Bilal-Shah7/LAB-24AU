#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float grade;
    string contact;
};

void displayStudentInfo(Student* student) {
    cout << "Student ID: " << student->id << endl;
    cout << "Name: " << student->name << endl;
    cout << "Grade: " << student->grade << endl;
    cout << "Contact Information: " << student->contact << endl;
}

int main() {
    Student* student1 = new Student;

    cout << "Enter student ID: ";
    cin >> student1->id;
    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, student1->name);
    cout << "Enter student grade: ";
    cin >> student1->grade;
    cin.ignore();
    cout << "Enter student contact information: ";
    getline(cin, student1->contact);

    displayStudentInfo(student1);

    delete student1;

    return 0;
}
