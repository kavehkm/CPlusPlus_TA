#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"


class Student : public Person
{
    private:
        double gpa;
    public:
        Student (string nm, double g);
        virtual ~Student ();
        virtual void print () const;
};
#endif