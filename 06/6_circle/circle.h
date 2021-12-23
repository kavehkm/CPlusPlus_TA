// check for header
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
using namespace std;


class Circle {
    private:
        double radius;
    public:
        // constructors and destructors
        Circle (double radius);
        Circle ();
        Circle (const Circle &circle);
        ~Circle ();
        // member functions
        void setRadius (double raidus);
        double getRadius () const;
        double getArea () const;
        double getPerimeter () const;
};


#endif