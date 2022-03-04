#ifndef COURSE_H
#define COURSE_H
#include "roster.h"


class Course
{
    private:
        string name;
        int units;
        Roster* roster;
    public:
        Course (string n, int u);
        ~Course ();
        string getName () const;
        Roster* getRoster () const;
        void addStudent (string name);
        void print () const;
};
#endif