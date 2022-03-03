#include "employee.h"


Employee :: Employee (string n, double s):
Person(n), salary(s) {
}

Employee :: ~Employee ()
{
}

void Employee :: setSalary (double s) {
    salary = s;
}

double Employee :: getSalary () const {
    return salary;
}

void Employee :: print () const {
    Person :: print();
    cout << "Salary: " << salary << endl;
}
