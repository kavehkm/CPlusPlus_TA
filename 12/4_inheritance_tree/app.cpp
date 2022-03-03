#include "student.h"
#include "employee.h"


int main () {
    cout << "Person: " << endl;
    Person person("kaveh");
    person.print();
    cout << endl << endl;
    cout << "Student: " << endl;
    Student student("amin", 18.99);
    student.print();
    cout << endl << endl;
    cout << "Employee: " << endl;
    Employee employee("darya", 6666.6);
    employee.print();
    cout << endl << endl;
    return 0;
}