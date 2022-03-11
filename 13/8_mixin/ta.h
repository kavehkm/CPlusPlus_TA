#ifndef TA_H
#define TA_H
#include "person.h"
#include "prftype.h"
#include "stdtype.h"

class TA : public Person, public PrfType, public StdType
{
    public:
        TA (string nm, double s, double g);
        void printSalary () const;
        void printGPA () const;
        void print () const;
};
#endif