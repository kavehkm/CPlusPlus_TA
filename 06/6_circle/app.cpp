#include "circle.h"
#include <iostream>
using namespace std;


int main () {
    Circle circle(5.2);
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;
    return 0;
}