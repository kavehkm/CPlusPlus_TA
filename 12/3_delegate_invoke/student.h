#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"


class Student : public Person
{
    private:
        double gpa;
    public:
        Student ();
        Student (long int id, double g);
        Student (const Student& student);
        ~Student ();
        void setGPA (double g);
        double getGPA () const;
        void print () const;
};
#endif