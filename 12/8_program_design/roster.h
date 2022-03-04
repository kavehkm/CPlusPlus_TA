#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <string>
using namespace std;


class Roster
{
    private:
        int size;
        string* stdNames;
    public:
        Roster ();
        ~Roster ();
        void addStudent (string studentName);
        void print () const;
};
#endif