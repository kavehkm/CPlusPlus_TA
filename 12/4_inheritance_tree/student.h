#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"


class Student : public Person
{
    private:
        double gpa;
    public:
        Student (string n, double g);
        ~Student ();
        void setGPA (double g);
        double getGPA () const;
        void print () const;
};
#endif