#include <iostream>
using namespace std;

void reversearrays(int a[])
{

    for (int i = 9; i > -1; i--)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << "Original values : ";

    for (int i = 0; i < 10; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Reversed Values : ";
    reversearrays(a);
}