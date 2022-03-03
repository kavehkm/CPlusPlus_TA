#include "person.h"


Person :: Person (string n):
name(n) {
}

Person :: ~Person ()
{
}

void Person :: setName (string n) {
    name = n;
}

string Person :: getName () const {
    return name;
}

void Person :: print () const {
    cout << "Name: " << name << endl;
}