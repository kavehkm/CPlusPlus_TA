#ifndef RECT_H
#define RECT_H
#include "shape.h"


class Rect : public Shape
{
    private:
        double length;
        double width;
        bool isValid () const;
    public:
        Rect (double l, double w);
        ~Rect ();
        void print () const;
        double getArea () const;
        double getPerimeter () const;
};
#endif