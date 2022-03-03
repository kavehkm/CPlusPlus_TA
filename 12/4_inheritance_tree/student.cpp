#include "student.h"


Student :: Student (string n, double g):
Person(n), gpa(g) {
}

Student :: ~Student ()
{
}

void Student :: setGPA (double g) {
    gpa = g;
}

double Student :: getGPA () const {
    return gpa;
}

void Student :: print () const {
    Person :: print();
    cout << "GPA: " << gpa << endl;
}
