#include "student.h"


int main () {
    // pointer
    Person* ptr;

    // person
    ptr = new Person("kaveh");
    cout << "Person Information: " << endl;
    ptr->print();
    cout << endl;
    delete ptr;

    // student
    ptr = new Student("Kaveh", 18.90);
    cout << "Student Information: " << endl;
    ptr->print();
    cout << endl;
    delete ptr;

    return 0;
}