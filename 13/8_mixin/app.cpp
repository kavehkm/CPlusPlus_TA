#include "student.h"
#include "professor.h"
#include "ta.h"


int main () {
    Person per("Ahmad");
    Student std("Kaveh", 19.99);
    Professor prf("Amin", 100000.00);
    TA ta("Darya", 1000.00, 19.21);

    cout << "Person: " << endl;
    per.print();
    cout << endl << endl;


    cout << "Student: " << endl;
    std.print();
    cout << endl << endl;


    cout << "Professor: " << endl;
    prf.print();
    cout << endl << endl;


    cout << "TA: " << endl;
    ta.print();
    cout << endl << endl;

    return 0;
}