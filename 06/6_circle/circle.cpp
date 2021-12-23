#include "circle.h"
#include <cmath>


Circle :: Circle (double radius)
:radius(radius) {
    if (radius < 0.0) {
        assert(false);
    }
}

Circle :: Circle ()
:radius(0.0) {

}

Circle :: Circle (const Circle &circle)
:radius(circle.getRadius()) {

}

Circle :: ~Circle () {

}


double Circle :: getRadius () const {
    return radius;
}

double Circle :: getArea () const {
    return (M_PI * radius * radius);
}

double Circle :: getPerimeter () const {
    return (M_PI * 2 * radius);
}