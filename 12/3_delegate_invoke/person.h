#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <cassert>
using namespace std;


class Person
{
    private:
        long int identity;
    public:
        Person ();
        Person (long int id);
        Person (const Person& person);
        ~Person ();
        void setId (long int id);
        long int getId () const;
        void print () const;
};
#endif