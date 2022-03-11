#include "ta.h"


TA :: TA (string nm, double g, double s):
Person(nm) {
    gpa = g;
    salary = s;
}


void TA :: printGPA () const {
    cout << "GPA: " << gpa << endl;
}


void TA :: printSalary () const {
    cout << "Salary: " << salary << endl;
}


void TA :: print () const {
    Person :: print();
    printGPA();
    printSalary();
}