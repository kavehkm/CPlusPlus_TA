#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "name.h"


class Employee
{
    private:
        Name name;
        double salary;
    public:
        Employee (string f, string i, string l, double s);
        ~Employee ();
        void print () const;
};
#endif