#include <iostream>
#include <limits>
using namespace std;

const int MAX_STUDENTS = 30;  // Maximum number of students

void inputScores(int scores[], int &numStudents) {
    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents > MAX_STUDENTS) {
        cout << "Maximum number of students is " << MAX_STUDENTS << endl;
        numStudents = MAX_STUDENTS;
    }

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter score for student " << (i + 1) << ": ";
        cin >> scores[i];
    }
}

void printScores(int scores[], int numStudents) {
    cout << "\nScores of all students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << ": " << scores[i] << endl;
    }
}

double calculateAverage(int scores[], int numStudents) {
    int total = 0;
    for (int i = 0; i < numStudents; ++i) {
        total += scores[i];
    }
    return (double)total / numStudents;
}

int findHighestScore(int scores[], int numStudents) {
    int highest = scores[0];
    for (int i = 1; i < numStudents; ++i) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

int findLowestScore(int scores[], int numStudents) {
    int lowest = scores[0];
    for (int i = 1; i < numStudents; ++i) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int main() {
    int scores[MAX_STUDENTS];
    int numStudents;
    int choice;

    do {
        cout << "\nExam Score Management System" << endl;
        cout << "1. Input Scores" << endl;
        cout << "2. Display Scores" << endl;
        cout << "3. Calculate Average Score" << endl;
        cout << "4. Find Highest Score" << endl;
        cout << "5. Find Lowest Score" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputScores(scores, numStudents);
                break;
            case 2:
                printScores(scores, numStudents);
                break;
            case 3: {
                double average = calculateAverage(scores, numStudents);
                cout << "Average Score: " << average << endl;
                break;
            }
            case 4: {
                int highest = findHighestScore(scores, numStudents);
                cout << "Highest Score: " << highest << endl;
                break;
            }
            case 5: {
                int lowest = findLowestScore(scores, numStudents);
                cout << "Lowest Score: " << lowest << endl;
                break;
            }
            case 6:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
