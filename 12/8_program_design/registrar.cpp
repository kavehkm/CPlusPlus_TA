#include "registrar.h"


Registrar :: Registrar ()
{
}

Registrar :: ~Registrar ()
{
}

void Registrar :: enroll (Student student, Course course) {
    student.addCourse(course.getName());
    course.addStudent(student.getName());
}