#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int numReadings;
    double interval, temperature;
    vector<double> temperatures;

    cout << "Enter the number of temperature readings to collect: ";
    cin >> numReadings;

    cout << "Enter the time interval between readings (in minutes): ";
    cin >> interval;

    for (int i = 0; i < numReadings; ++i) {
        cout << "Enter temperature reading " << (i + 1) << ": ";
        cin >> temperature;
        temperatures.push_back(temperature);
    }

    cout << "\nTemperature Data Collected:\n";
    cout << "Reading\tTime (min)\tTemperature (°C)" << endl;
    for (int i = 0; i < numReadings; ++i) {
        cout << (i + 1) << "\t" << fixed << setprecision(1) << (i * interval) 
             << "\t\t" << temperatures[i] << endl;
    }

    double sum = 0;
    for (double temp : temperatures) {
        sum += temp;
    }

    double average = sum / numReadings;
    cout << "\nAverage Temperature: " << fixed << setprecision(2) << average << " °C" << endl;

    return 0;
}
