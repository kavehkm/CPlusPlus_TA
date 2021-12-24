#include <iostream>
using namespace std;


int main () {
    // number of days for each month in jalali calendar
    int numbersOfDays[13] = {
        0, 31, 31, 31, 31, 31, 31,
        30, 30, 30, 30, 30, 29
    };

    // get month number from user
    int month;
    do
    {
        cout << "Enter the month number(1 to 12): ";
        cin >> month;
    } while (month < 1 || month > 12);
    
    // get result and print back to user
    cout << "There are " << numbersOfDays[month] << " days in this month" << endl;

    return 0;
}