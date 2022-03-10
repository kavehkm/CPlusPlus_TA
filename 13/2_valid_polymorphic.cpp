#include <iostream>
#include <string>
using namespace std;


class Base
{
    public:
        virtual void print () const;
};


void Base :: print () const {
    cout << "In the Base" << endl;
}


class Derived : public Base
{
    public:
        virtual void print () const;
};

void Derived :: print () const {
    cout << "In the Derived" << endl;
}


int main () {
    Base* ptr;

    ptr = new Base();
    ptr->print();

    delete ptr;

    ptr = new Derived();
    ptr->print();

    delete ptr;

    return 0;
}