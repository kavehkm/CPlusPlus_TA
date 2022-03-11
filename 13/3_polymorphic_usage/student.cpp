#include "student.h"


Student :: Student (string nm, double g):
Person(nm), gpa(g) {
}

Student :: ~Student () {
}

void Student :: print () const {
    Person :: print();
    cout << "GPA: " << gpa << endl;
}