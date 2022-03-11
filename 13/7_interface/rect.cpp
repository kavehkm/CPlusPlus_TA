#include "rect.h"


Rect :: Rect (double l, double w):
length(l), width(w) {
    if (!isValid()) {
        cout << "Invalid rect!";
        assert(false);
    }
}


Rect :: ~Rect ()
{
}


void Rect :: print () const {
    cout << "Rectangle of " << length << " x " << width << endl;
}


double Rect :: getArea () const {
    return length * width;
}


double Rect :: getPerimeter () const {
    return 2 * (length + width);
}


bool Rect :: isValid () const {
    return (length > 0.0 && width > 0.0);
}