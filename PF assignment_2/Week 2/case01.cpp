#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char operation;

    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the Second number : ";
    cin >> b;

    cout << "Select the operation (+,-,*,/) : ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "The addition of " << a << " and " << b << " is : " << a + b << endl;
        break;
    case '-':
        cout << "The subtraction of " << a << " and " << b << " is : " << a - b << endl;
        break;
    case '*':
        cout << "The Multiplication of " << a << " and " << b << " is : " << a * b << endl;
        break;
    case '/':
        cout << "The division of " << a << " and " << b << " is : " << a / b << endl;
        break;
    }

    return 0;
}