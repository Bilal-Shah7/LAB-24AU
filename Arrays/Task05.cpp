#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int value;
    cout << "Kindly Enter the value you want to Locate : ";
    cin >> value;
    bool found = false;
    for (int i = 0; i < 10; i++)
    {
        if (value == arr[i])
        {
            cout << "Value found\n";
            cout << "Value is at index : " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Value not found" << endl;
    }
    return 0;
}