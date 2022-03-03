#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;


class Person
{
    private:
        string name;
    public:
        Person (string name);
        ~Person ();
        void setName (string n);
        string getName () const;
        void print () const;
};

#endif