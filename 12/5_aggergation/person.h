#ifndef PERSON_H
#define PERSON_H
#include "date.h"


class Person
{
    private:
        long int identity;
        Date birthDate;
    public:
        Person (long int id, Date bd);
        ~Person ();
        void print () const;
};
#endif