#include "roster.h"


Roster :: Roster ():
size(0)
{
    stdNames = new string[20];
}

Roster :: ~Roster () {
    delete[] stdNames;
}

void Roster :: addStudent (string studentName) {
    stdNames[size] = studentName;
    size++;
}

void Roster :: print () const {
    cout << "List of Students: " << endl;    
    for (size_t i = 0; i < size; i++)
    {
        cout << stdNames[i] << endl;
    }
    cout << endl;
}
