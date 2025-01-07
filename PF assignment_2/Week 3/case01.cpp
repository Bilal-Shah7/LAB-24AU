#include <iostream>
using namespace std;

const int lanes = 4;
int greenlight(int vehcount[])
{
    int maxveh = 0;
    int lanewithmax = 0;
    for (int i = 0; i < lanes; i++)
    {
        if (vehcount[i] > maxveh)
        {
            maxveh = vehcount[i];
            lanewithmax = i;
        }
    }
    return lanewithmax;
}

void signal(int vehcount[])
{

    int lane = greenlight(vehcount);

    for (int i = 0; i < lanes; i++)
    {
        if (i == lane)
        {
            cout << "Lane " << i + 1 << " has Green light (" << vehcount[i] << ")" << endl;
        }
        else
        {
            cout << "Lane " << i + 1 << " has Red light (" << vehcount[i] << ")" << endl;
        }
    }
}
int main()
{

    int vehcount[lanes] = {20, 30, 14, 25};

    cout << "Current Traffic Signals status : " << endl;

    signal(vehcount);
}
