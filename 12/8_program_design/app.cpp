#include "registrar.h"


int main () {
    // define registrar
    Registrar reg;

    // define students
    Student student1("Kaveh");
    Student student2("Amin");

    // define courses
    Course course1("Computer Programming", 3);
    Course course2("Data Structure", 3);
    Course course3("Mathematics", 4);
    Course course4("Database", 3);

    // enroll student1
    reg.enroll(student1, course1);
    reg.enroll(student1, course2);
    reg.enroll(student1, course4);

    // enroll student2
    reg.enroll(student2, course1);
    reg.enroll(student2, course2);
    reg.enroll(student2, course3);
    reg.enroll(student2, course4);

    // print students
    student1.print();
    student2.print();

    // print courses
    course1.print();
    course2.print();
    course3.print();
    course4.print();

    return 0;
}