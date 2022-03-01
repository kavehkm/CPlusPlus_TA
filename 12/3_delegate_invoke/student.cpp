#include "student.h"


Student :: Student ():
// invoke
Person(), gpa(0.0) {
}

Student :: Student (long int id, double g):
Person(id), gpa(g)
{
    assert(gpa >= 0.0 && gpa <= 4.0);
}

Student :: Student (const Student& student):
Person(student), gpa(student.getGPA())
{
}

Student :: ~Student () {
}

void Student :: setGPA (double g) {
    gpa = g;
    assert(gpa >= 0.0 && gpa <= 4.0);
}

double Student :: getGPA () const {
    return gpa;
}

void Student :: print () const {
    // delegate
    Person :: print();
    cout << "GPA: " << gpa << endl;
}