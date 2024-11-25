#include <iostream>
using namespace std;

int main()
{

    int a[5] = {5, 20, 15, 30, 25};
    int max = a[0];
    int min = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

        else if (a[i] < min)
        {
            min = a[i];
        }
    }

    cout << "Maximum value is : " << max << endl;
    cout << "Minimum value is : " << min << endl;
    return 0;
}