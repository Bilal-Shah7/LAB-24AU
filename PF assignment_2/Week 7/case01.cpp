#include <iostream>
using namespace std;

// Function for addition
double add(double a, double b) {
    return a + b;
}

// Function for subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function for multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0; // To avoid division by zero error
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "Welcome to the Calculator Application!" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    double result = 0;

    // Switch to select the operation
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1; // Exit the program if the operation is invalid
    }

    cout << "Result: " << result << endl;

    return 0;
}
