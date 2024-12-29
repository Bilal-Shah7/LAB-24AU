#include <iostream>
using namespace std;
int main()
{

    float totalcost = 0.00;
    int choice;

    do
    {

        cout << "Kindly select from the Menu listed : " << endl;
        cout << "1. Soup $2.5\n2. Shampoo $3.00\n3. Vegetable $1.50\n4. Oil $5.00\n5. Handwash $2.00\n6. Exit menu and print receipt\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            totalcost += 2.50;
            break;
        case 2:
            totalcost += 3.00;
            break;
        case 3:
            totalcost += 1.50;
            break;
        case 4:
            totalcost += 5.00;
            break;
        case 5:
            totalcost += 2.00;
            break;
        case 6:
            cout << "exiting menu and printing total bill.." << endl;
            break;
        }
    } while (choice != 6);

    cout << "The total bill of the purchased items is : $" << totalcost;
}