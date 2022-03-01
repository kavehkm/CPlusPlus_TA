#include <iostream>
#include <cassert>
using namespace std;


// Person class defination
class Person
{
    private:
        long int identity;
    public:
        void setId (long int id);
        long int getId () const;
};


// Person class implementation
void Person :: setId (long int id) {
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}

long int Person :: getId () const {
    return identity;
}


// Student class defination
class Student : public Person
{
    private:
        double gpa;
    public:
        void setGPA (double gpa);
        double getGPA () const;
};


// Student class implementation
void Student :: setGPA (double gp) {
    gpa = gp;
    assert(gpa >= 0 && gpa <= 4.5);
}

double Student :: getGPA () const {
    return gpa;
}


int main () {
    Person person;
    person.setId(100000000L);
    cout << "Person information: " << endl;
    cout << "Person identity: " << person.getId();
    cout << endl << endl;

    Student student;
    student.setId(200000000L);
    student.setGPA(3.9);
    cout << "Student information: " << endl;
    cout << "Student identity: " << student.getId() << endl;
    cout << "Student gpa: " << student.getGPA() << endl;

    return 0;
}