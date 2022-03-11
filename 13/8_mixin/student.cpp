#include "student.h"


Student :: Student (string nm, double g):
Person(nm){
    gpa = g;
}


void Student :: printGPA () const {
    cout << "GPA: " << gpa << endl;
}


void Student :: print () const {
    Person :: print();
    printGPA();
}