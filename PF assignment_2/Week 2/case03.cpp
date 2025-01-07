#include <iostream>
using namespace std;

int main()
{

    const int no_emp = 3;

    string name[no_emp] = {"Bilal Shah", "Hanan Iftikhar", "Jawad Ali"};
    int workinghours[no_emp] = {20, 25, 15};
    int hourlyrate[no_emp] = {50, 60, 55};
    int totalpay;

    for (int i = 0; i < no_emp; i++)
    {
        cout << "Paycheck" << endl;
        totalpay = workinghours[i] * hourlyrate[i];
        cout << "Employee Name : " << name[i] << endl;
        cout << "Hours Worked : " << workinghours[i] << endl;
        cout << "Hourly rate : $" << hourlyrate[i] << endl;
        cout << "Total pay : $" << totalpay << endl
             << endl;
    }
    return 0;
}