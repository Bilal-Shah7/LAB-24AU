#include <iostream>
#include <string>
using namespace std;

const int MAX_WEEKS = 5;  // Maximum number of weeks in a month
const int DAYS_IN_WEEK = 7; // Number of days in a week

void displayCalendar(string calendar[MAX_WEEKS][DAYS_IN_WEEK], int daysInMonth) {
    cout << "\nCalendar for the Month:\n";
    int day = 1;
    for (int i = 0; i < MAX_WEEKS; ++i) {
        for (int j = 0; j < DAYS_IN_WEEK; ++j) {
            if (day <= daysInMonth) {
                cout << day << ": " << calendar[i][j] << "\t";
                ++day;
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

void addEvent(string calendar[MAX_WEEKS][DAYS_IN_WEEK], int day, string event) {
    int week = (day - 1) / DAYS_IN_WEEK;
    int dayOfWeek = (day - 1) % DAYS_IN_WEEK;
    calendar[week][dayOfWeek] = event;
}

int main() {
    string calendar[MAX_WEEKS][DAYS_IN_WEEK] = {};
    int daysInMonth, day;
    string event;

    cout << "Enter the number of days in the month (1-31): ";
    cin >> daysInMonth;

    if (daysInMonth < 1 || daysInMonth > 31) {
        cout << "Invalid number of days." << endl;
        return 1;
    }

    do {
        displayCalendar(calendar, daysInMonth);

        cout << "\nEnter a day (1 to " << daysInMonth << ") to add an event (0 to stop): ";
        cin >> day;
        if (day == 0) break;

        if (day < 1 || day > daysInMonth) {
            cout << "Invalid day." << endl;
            continue;
        }

        cin.ignore(); // To ignore the newline character left by cin
        cout << "Enter event description for day " << day << ": ";
        getline(cin, event);

        addEvent(calendar, day, event);
    } while (true);

    return 0;
}
