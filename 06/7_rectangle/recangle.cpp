#include "rectangle.h"
#include <cassert>


Rectangle :: Rectangle (double length, double height)
:length(length), height(height) {
    if (length < 0.0 || height < 0.0) {
        assert(false);
    }
}

Rectangle :: Rectangle ()
:length(0.0), height(0.0) {

}

Rectangle :: Rectangle (const Rectangle & rectangle)
:height(rectangle.getHeight()), length(rectangle.getLenght()) {

}

Rectangle :: ~Rectangle () {

}

double Rectangle :: getHeight () const {
    return height;
}

double Rectangle :: getLenght () const {
    return length;
}

double Rectangle :: getArea () const {
    return length * height;
}

double Rectangle :: getPerimeter () const {
    return 2 * (length + height);
}
