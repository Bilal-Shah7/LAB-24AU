#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 5;

void displayEmployeeInfo(string names[], int ids[], double salaries[], string departments[], int numEmployees) {
    cout << "\nEmployee Information:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << (i + 1) << ":\n";
        cout << "Name: " << names[i] << endl;
        cout << "ID: " << ids[i] << endl;
        cout << "Salary: $" << salaries[i] << endl;
        cout << "Department: " << departments[i] << endl;
        cout << "-----------------------------\n";
    }
}

void addEmployee(string names[], int ids[], double salaries[], string departments[], int &numEmployees) {
    if (numEmployees >= MAX_EMPLOYEES) {
        cout << "Cannot add more employees, maximum limit reached." << endl;
        return;
    }

    cout << "Enter name of employee: ";
    cin.ignore();
    getline(cin, names[numEmployees]);

    cout << "Enter ID of employee: ";
    cin >> ids[numEmployees];

    cout << "Enter salary of employee: ";
    cin >> salaries[numEmployees];

    cout << "Enter department of employee: ";
    cin.ignore();
    getline(cin, departments[numEmployees]);

    numEmployees++;
}

int main() {
    string employeeNames[MAX_EMPLOYEES];
    int employeeIDs[MAX_EMPLOYEES];
    double employeeSalaries[MAX_EMPLOYEES];
    string employeeDepartments[MAX_EMPLOYEES];
    int numEmployees = 0;

    int choice;

    do {
        cout << "Employee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(employeeNames, employeeIDs, employeeSalaries, employeeDepartments, numEmployees);
                break;
            case 2:
                displayEmployeeInfo(employeeNames, employeeIDs, employeeSalaries, employeeDepartments, numEmployees);
                break;
            case 3:
                cout << "Exiting the Employee Management System.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
