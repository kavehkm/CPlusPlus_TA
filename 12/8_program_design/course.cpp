#include "course.h"


Course :: Course (string n, int u):
name(n), units(u) {
    roster = new Roster;
}

Course :: ~Course () {
}

string Course :: getName () const {
    return name;
}

void Course :: addStudent (string name) {
    roster->addStudent(name);
}

Roster* Course :: getRoster () const {
    return roster;
}

void Course :: print () const {
    cout << "Course Name: " << name << endl;
    cout << "Number of units: " << units << endl;
    roster->print();
}