#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"
#include "prftype.h"

class Professor : public Person, public PrfType
{
    public:
        Professor (string nm, double s);
        void printSalary () const;
        void print () const;
};
#endif