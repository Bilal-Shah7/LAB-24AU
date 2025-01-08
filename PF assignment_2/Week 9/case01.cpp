#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 5;

double calculateAverage(int grades[], int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; ++i) {
        sum += grades[i];
    }
    return static_cast<double>(sum) / numStudents;
}

void displayStudentInfo(string names[], int ids[], int grades[], int numStudents) {
    cout << "\nStudent Records:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student Name: " << names[i] << ", ID: " << ids[i] << ", Grade: " << grades[i] << endl;
    }
}

int main() {
    string studentNames[MAX_STUDENTS];
    int studentIDs[MAX_STUDENTS];
    int studentGrades[MAX_STUDENTS];
    int numStudents;

    cout << "Enter the number of students (max " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents < 1 || numStudents > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a number between 1 and " << MAX_STUDENTS << "." << endl;
        return 1;
    }

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, studentNames[i]);

        cout << "Enter ID for student " << (i + 1) << ": ";
        cin >> studentIDs[i];

        cout << "Enter grade for student " << (i + 1) << ": ";
        cin >> studentGrades[i];
    }

    displayStudentInfo(studentNames, studentIDs, studentGrades, numStudents);

    double average = calculateAverage(studentGrades, numStudents);
    cout << "\nAverage grade for the class: " << average << endl;

    return 0;
}
