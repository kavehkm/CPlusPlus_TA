#include "date.h"


Date :: Date (int y, int m, int d):
year(y), month(m), day(d) {
    if (month < 1 || month > 12) {
        assert(false);
    }
    int daysInMonth[13] = {
        0, 31, 28, 31, 30, 31, 30, 31,
        31, 30, 31, 30, 31
    };
    if (day < 1 || daysInMonth[month] < day) {
        assert(false);
    }
    if (year < 1900 || year > 2099) {
        assert(false);
    }
}

Date :: ~Date () {
}

void Date :: print () const {
    cout << year << "/" << month << "/" << day << endl;
}
