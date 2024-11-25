#include <iostream>
using namespace std;

void reverse(int a[], int n)
{

    int rv[n];

    for (int i = 0; i < n; i++)
    {

        rv[i] = a[n - 1 - i];
        cout << rv[i] << " ";
    }
}

int main()
{

    int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << "Original values : ";
    int n = sizeof(a) / 4;

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Reversed array : ";
    reverse(a, n);
}
