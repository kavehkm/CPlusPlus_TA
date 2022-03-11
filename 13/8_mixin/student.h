#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "stdtype.h"

class Student : public Person, public StdType
{
    public:
        Student (string nm, double g);
        void printGPA () const;
        void print () const;
};
#endif