#include "square.h"


Square :: Square (double s):
side(s) {
    if (!isValid()) {
        cout << "Invalid square!" << endl;
        assert(false);
    }
}


Square :: ~Square () {
}


void Square :: print () const {
    cout << "Square of side " << side << endl;
}


double Square :: getArea () const {
    return side * side;
}


double Square :: getPerimeter () const {
    return side * 4;
}


bool Square :: isValid () const {
    return side > 0.0;
}