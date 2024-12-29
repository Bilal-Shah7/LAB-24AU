#include <iostream>
using namespace std;
int main()
{
    int num;
    int arr[2][3] = {{1, 2, 3}, {2, 3, 4}};
    cout << "Enter the number you are searching for : ";
    cin >> num;
    bool found = false;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (num == arr[i][j])
            {
                cout << "The number is found at Row :" << i << " And at Col :" << j << endl;
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "Sorry! We couldn't found the number you are looking for." << endl;
    }
}