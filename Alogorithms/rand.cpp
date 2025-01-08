#include <iostream>
using namespace std;

void inarray(int arr[])
{
    for (int i = 0; i < 50; i++)
    {
        arr[i] = rand() % 50;
    }
}
void bubblesort(int arr[], int &temp)
{

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[50];

    inarray(arr);

    for (int i = 0; i < 50; i++)
    {
        cout << arr[i] << " ";
    }
    int temp;
    bubblesort(arr, temp);

    for (int i = 0; i < 50; i++)
    {
        cout << arr[i] << " ";
    }
}