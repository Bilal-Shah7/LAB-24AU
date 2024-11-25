#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {10, 15, 20, 10, 40, 20, 10, 40, 60, 10};

    double average = 0.0;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {

        sum += arr[i];
    }
    average = double(sum) / 10;
    cout << "Sum of the values is : " << sum << endl;

    cout << "Average of the values is : " << average;
}