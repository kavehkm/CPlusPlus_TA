#include <iostream>
using namespace std;


int main () {
    short int dayNumber;

    cout << "Enter day number: ";
    cin >> dayNumber;

    switch (dayNumber) {
    case 0:
        cout << "Sunday" << endl;
        cout << "First day of week";
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        cout << "Last day of week" << endl;
        break;
    default:
        cout << "Invalid number!" << endl;
    }
    return 0;
}