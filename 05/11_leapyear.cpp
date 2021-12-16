#include <iostream>
using namespace std;


int input();
bool process(int year);
void output(int year, bool result);


int main () {
    int year = input();
    bool result = process(year);
    output(year, result);

    return 0;
}


int input () {
    int year;
    do
    {
        cout << "Enter year after 1582: ";
        cin >> year;
    } while (year <= 1582);
    
    return year;
}


bool process(int year) {
    bool criteria1 = year % 4 == 0;
    bool criteria2 = year % 100 != 0 || year % 400 == 0;
    return criteria1 && criteria2;
}


void output(int year, bool result) {
    if (result) {
        cout << "Year " << year << " is leap year" << endl;
    }
    else {
        cout << "Year " << year << " is not leap year" << endl;
    }
    return;
}