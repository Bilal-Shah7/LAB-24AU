#include <iostream>
using namespace std;
int discount(float &total, int count)
{
    int discount;
    if (count >= 2)
    {
        discount = total * 20 / 100;
        total = (0.00 + total) - discount;
        return total;
    }
    return total;
}
int main()
{

    int choice;
    float total = 0;
    int count = 0;
    do
    {
        count++;
        cout << "Menu \n20% Discount if you buy 2 or more than 2 items" << endl;
        cout << "1. Burger $5.00 \n2. Pizza $7.00\n3. Steak $10.00 \n4. Sushi $4.00 \n5. Combo Platter $12.00\n6. Exit Menu." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Burger added" << endl;
            total = total + 5.00;
            discount(total, count);
            break;
        case 2:
            cout << "Pizza added" << endl;
            total = total + 7.00;
            discount(total, count);
            break;
        case 3:
            cout << "Steak added" << endl;
            total = total + 10.00;
            discount(total, count);
            break;
        case 4:
            cout << "Sushi added" << endl;
            total = total + 4.00;
            discount(total, count);
            break;
        case 5:
            cout << "Combo Platter added" << endl;
            total = total + 12.00;
            discount(total, count);
            break;
        case 6:
            cout << "Exiting menu... printing receipt." << endl;
            break;
        }
    } while (choice != 6);

    if (count >= 3)
    {
        cout << "Your total Bill after discount is : $" << total << endl;
    }
    else
    {
        cout << "Your total Bill is : $" << total << endl;
    }
}