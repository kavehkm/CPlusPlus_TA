#include "person.h"


Person :: Person (string nm):
name(nm) {
}


void Person :: print () const {
    cout << "Name: " << name << endl;
}
