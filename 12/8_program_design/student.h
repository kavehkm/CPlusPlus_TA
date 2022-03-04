#ifndef STUDENT_H
#define STUDENT_H
#include "schedule.h"

class Student
{
    private:
        string name;
        Schedule* schedule;
    public:
        Student (string n);
        ~Student ();
        string getName () const;
        Schedule* getSchedule () const;
        void addCourse (string courseName);
        void print () const;
};
#endif