#include <iostream>
using namespace std;


class Person
{
    public:
        virtual void print () const {
            cout << "In Person" << endl;
        }
};


class Student : public Person
{
    public:
        void print () const {
            cout << "In Student" << endl;
        }
};


int main () {
    // upcast
    Person* ptr1;
    ptr1 = new Student();

    // downcast
    Student* ptr2;
    ptr2 = dynamic_cast <Student*> (ptr1);

    return 0;
}