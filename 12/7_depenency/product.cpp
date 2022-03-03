#include "product.h"


Product :: Product (string n, double up):
name(n), unitPrice(up) {
}

Product :: ~Product () {
}


double Product :: getPrice () const {
    return unitPrice;
}