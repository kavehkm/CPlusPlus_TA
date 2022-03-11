#include "circle.h"


Circle :: Circle (double r):
radius(r) {
    if (!isValid()) {
        cout << "Invalid circle!" << endl;
        assert(false);
    }
}


Circle :: ~Circle ()
{
}


void Circle :: print () const {
    cout << "Circle of radius: " << radius << endl;
}


double Circle :: getArea () const {
    return M_PI * radius * radius;
}


double Circle :: getPerimeter () const {
    return M_PI * radius * 2;
}


bool Circle :: isValid () const {
    return radius > 0.0;
}