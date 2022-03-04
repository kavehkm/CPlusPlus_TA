#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include <cassert>
#include <string>
using namespace std;


class Schedule
{
    private:
        int size;
        string* courseNames;
    
    public:
        Schedule ();
        ~Schedule ();
        void addCourse (string courseName);
        void print () const;
};
#endif