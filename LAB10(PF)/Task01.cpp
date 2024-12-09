#include <iostream>
using namespace std;

void rowhighest(int testdata[3][4], int rowindex)
{
    rowindex--;
    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < testdata[rowindex][j])
            {
                max = testdata[rowindex][j];
            };
        }
    }
    rowindex++;
    int *ptr = &max;
    cout << "Highest value in Row " << rowindex << " is : " << max << endl;
    cout << "Address of the value " << max << " is : " << ptr << endl;
}

void rowlowest(int testdata[3][4], int rowindex)
{
    rowindex--;
    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (min > testdata[rowindex][j])
            {
                min = testdata[rowindex][j];
            }
        }
    }
    rowindex++;
    int *ptr = &min;
    cout << "Lowest value in Row " << rowindex << " is : " << min << endl;
    cout << "Address of the value " << min << " is : " << ptr << endl;
}

void highestincolumn(int testdata[3][4], int colindex)
{
    colindex--;
    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < testdata[i][colindex])
            {
                max = testdata[i][colindex];
            };
        }
    }
    colindex++;
    int *ptr = &max;
    cout << "Highest value in Column " << colindex << " is : " << max << endl;
    cout << "Address of the value " << max << " is : " << ptr << endl;
}

void collowest(int testdata[3][4], int colindex)
{

    colindex--;

    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (min > testdata[i][colindex])
            {
                min = testdata[i][colindex];
            };
        }
    }
    colindex++;
    int *ptr = &min;
    cout << "Lowest value in Column " << colindex << " is : " << min << endl;
    cout << "Address of the value " << min << " is : " << ptr << endl;
}

void rowsum(int testdata[3][4], int rowindex){

rowindex--;
int sum=0;
for (int i=0;i<4;i++){

sum += testdata[rowindex][i];

}
rowindex++;
cout << "Sum of the values of Row "<<rowindex<<" is : "<<sum<<endl;

}


int main()
{

    int operation;
    const int row = 3;
    const int col = 4;
    int testdata[row][col] = {{2, 4, 6, 8}, {10, 12, 14, 16}, {18, 20, 22, 24}};
    int rowindex, colindex;

    cout << "What you want to be displayed.\n1.Highest value in a row.\n2.Lowest value in a row.\n3.Highest value in Column\n4.Lowest value in Column.\n5.Left diagnol total.\n6.Right diagnol total.\n7.Row Sum.\n8.Column Sum.\n";
    cin >> operation;

    switch (operation)
    {
    case 1:
        cout << "Enter Row Number : ";
        cin >> rowindex;
        rowhighest(testdata, rowindex);
        break;
    case 2:
        cout << "Enter Row Number : ";
        cin >> rowindex;
        rowlowest(testdata, rowindex);
        break;
    case 3:
        cout << "Enter Column Number : ";
        cin >> colindex;
        highestincolumn(testdata, colindex);
        break;
    case 4:
        cout << "Enter Column Number : ";
        cin >> colindex;
        collowest(testdata, colindex);
        break;
        case 5:
        cout << "Enter Row Number : ";
        cin >>rowindex;
        rowsum(testdata, rowindex);
        break;
        // case 5:

        // case 6:
        // case 7:
        // case 8:
    }
}