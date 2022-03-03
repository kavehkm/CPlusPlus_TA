#include "employee.h"


int main () {
    Employee emp1("Mary", "B", "White", 222222);
    Employee emp2("William", "S", "Black", 44444);
    Employee emp3("Ryan", "A", "Brown", 66666);

    emp1.print();
    emp2.print();
    emp3.print();
    return 0;
}