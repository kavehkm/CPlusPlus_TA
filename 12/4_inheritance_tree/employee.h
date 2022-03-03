#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"


class Employee : public Person
{
    private:
        double salary;
    public:
        Employee (string n, double s);
        ~Employee ();
        void setSalary (double s);
        double getSalary () const;
        void print () const;
};
#endif