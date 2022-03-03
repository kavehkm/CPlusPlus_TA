#include "person.h"


int main () {
    // first person
    Date birthDate1(1994, 10, 24);
    Person person1(666, birthDate1);

    // second person
    Date birthDate2(2000, 12, 2);
    Person person2(667, birthDate2);

    // result
    person1.print();
    person2.print();

    return 0;
}