#include "student.h"


Student :: Student (string n):
name(n) {
    schedule = new Schedule;
}

Student :: ~Student () {
}

string Student :: getName () const {
    return name;
}

Schedule* Student :: getSchedule () const {
    return schedule;
}

void Student :: addCourse (string courseName) {
    schedule->addCourse(courseName);
}

void Student :: print () const {
    cout << "Student name: " << name << endl;
    schedule->print();
}