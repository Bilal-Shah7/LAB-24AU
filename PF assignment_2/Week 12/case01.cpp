#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
    string department;
};

void addEmployee(Employee& emp) {
    cout << "Enter employee ID: ";
    cin >> emp.id;
    cin.ignore();
    cout << "Enter employee name: ";
    getline(cin, emp.name);
    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cin.ignore();
    cout << "Enter employee department: ";
    getline(cin, emp.department);
}

void updateSalary(Employee& emp, float newSalary) {
    emp.salary = newSalary;
    cout << "Salary updated to: " << emp.salary << endl;
}

void updateDepartment(Employee& emp, const string& newDepartment) {
    emp.department = newDepartment;
    cout << "Department updated to: " << emp.department << endl;
}

void displayEmployeeInfo(const Employee& emp) {
    cout << "Employee ID: " << emp.id << endl;
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee Salary: " << emp.salary << endl;
    cout << "Employee Department: " << emp.department << endl;
}

int main() {
    Employee employees[3];
    int choice;
    int empIndex;

    while (true) {
        cout << "\nEmployee Management System" << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Update Employee Salary" << endl;
        cout << "3. Update Employee Department" << endl;
        cout << "4. Display Employee Info" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter employee index (0-2): ";
                cin >> empIndex;
                if (empIndex >= 0 && empIndex < 3) {
                    addEmployee(employees[empIndex]);
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 2:
                cout << "Enter employee index (0-2): ";
                cin >> empIndex;
                if (empIndex >= 0 && empIndex < 3) {
                    float newSalary;
                    cout << "Enter new salary: ";
                    cin >> newSalary;
                    updateSalary(employees[empIndex], newSalary);
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 3:
                cout << "Enter employee index (0-2): ";
                cin >> empIndex;
                if (empIndex >= 0 && empIndex < 3) {
                    string newDepartment;
                    cout << "Enter new department: ";
                    cin.ignore();
                    getline(cin, newDepartment);
                    updateDepartment(employees[empIndex], newDepartment);
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 4:
                cout << "Enter employee index (0-2): ";
                cin >> empIndex;
                if (empIndex >= 0 && empIndex < 3) {
                    displayEmployeeInfo(employees[empIndex]);
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
