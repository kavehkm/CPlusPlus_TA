#include "student.h"


int main () {
    Person* ptr[3];

    ptr[0] = new Person("Ahmad");
    ptr[1] = new Student("Amin", 15.67);
    ptr[2] = new Student("Kaveh", 19.99);

    for (size_t i = 0; i < 3; i++)
    {
        ptr[i]->print();
        cout << endl;
    }

    // delete heap memory
    for (size_t i = 0; i < 3; i++)
    {
        delete ptr[i];
    }

    return 0;
}