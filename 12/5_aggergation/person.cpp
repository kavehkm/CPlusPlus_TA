#include "person.h"


Person :: Person (long int id, Date bd):
identity(id), birthDate(bd) {
    assert(identity > 10 && identity < 1000000);
}

Person :: ~Person ()
{
}

void Person :: print () const {
    cout << "Person Identity: " << identity << endl;
    cout << "person date of birth: ";
    birthDate.print();
    cout << endl << endl;
}