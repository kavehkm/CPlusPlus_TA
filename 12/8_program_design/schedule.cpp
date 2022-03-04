#include "schedule.h"


Schedule :: Schedule ():
size(0) {
    courseNames = new string[5];
}

Schedule :: ~Schedule () {
    delete[] courseNames;
}

void Schedule :: addCourse (string courseName) {
    courseNames[size] = courseName;
    size++;
}

void Schedule :: print () const {
    cout << "List of Courses: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << courseNames[i] << endl;
    }
    cout << endl;
}