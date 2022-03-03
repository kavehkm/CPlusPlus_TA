#include "employee.h"


Employee :: Employee (string f, string i, string l, double s):
name(f, i, l), salary(s) {
    assert(salary > 0.0 and salary < 1000000.0);
}

Employee :: ~Employee () {
}


void Employee :: print () const {
    name.print();
    cout << "Salary: " << salary << endl << endl;
}