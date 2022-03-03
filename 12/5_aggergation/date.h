#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <cassert>
using namespace std;


class Date
{
    private:
        int year;
        int month;
        int day;
    public:
        Date (int y, int m, int d);
        ~Date ();
        void print () const;
};
#endif