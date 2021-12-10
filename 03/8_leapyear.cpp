#include <iostream>
using namespace std;


int main () {
    int year;
    bool divBy400, divBy4, divBy100;
    bool leapYear;

    cout << "Enter the year: ";
    cin >> year;

    divBy400 = year % 400 == 0;
    divBy4 = year % 4 == 0;
    divBy100 = year % 4 == 0;

    leapYear = divBy400 || divBy4 && !divBy100;

    if (leapYear) {
        cout << "Year " << year << " is leap year";
    }
    else {
        cout << "Year " << year << " is not leap year";
    }

    return 0;
}