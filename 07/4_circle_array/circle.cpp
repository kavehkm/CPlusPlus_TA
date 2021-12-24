#include "circle.h"
#include <cmath>


Circle :: Circle (double radius)
:radius(radius) {

}

Circle :: Circle (const Circle &circle)
:radius(circle.getRadius()) {

}

Circle :: Circle ()
:radius(0.0) {

}

Circle :: ~Circle () {

}

double Circle :: getRadius () const {
    return radius;
}

double Circle :: getArea () const {
    return M_PI * radius * radius;
}

double  Circle :: getPerimeter () const {
    return M_PI * radius * 2;
}