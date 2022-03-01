#include "person.h"


Person :: Person ():
identity(0) {
}

Person :: Person (long int id):
identity(id) {
    assert(identity >= 1000 && identity <=1000000);
}

Person :: Person (const Person& person):
identity(person.getId()){
}

Person :: ~Person ()
{
}

void Person :: setId (long int id) {
    identity = id;
    assert(identity >= 1000 && identity <=1000000);
}

long int Person :: getId () const {
    return identity;
}


void Person :: print () const {
    cout << "Identity: " << identity << endl;
}