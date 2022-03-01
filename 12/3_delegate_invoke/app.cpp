#include "student.h"


int main () {
    Person person(1111);
    cout << "Information about person: " << endl;
    person.print();
    cout << endl;

    Student student(22222, 3.9);
    cout << "Information about student: " << endl;
    student.print();
    return 0;
}