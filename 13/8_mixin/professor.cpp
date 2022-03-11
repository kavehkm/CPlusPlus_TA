#include "professor.h"


Professor :: Professor (string nm, double s):
Person(nm) {
    salary = s;
}


void Professor :: printSalary () const {
    cout << "Salary: " << salary << endl;
}


void Professor :: print () const {
    Person :: print();
    printSalary();
}