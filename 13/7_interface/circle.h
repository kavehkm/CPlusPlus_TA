#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"


class Circle : public Shape
{
    private:
        double radius;
        bool isValid () const;
    public:
        Circle (double r);
        ~Circle ();
        void print () const;
        double getArea () const;
        double getPerimeter () const;
};
#endif