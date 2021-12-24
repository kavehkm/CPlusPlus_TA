#include "circle.h"
#include <iostream>
using namespace std;


int main () {
    const int CAPACITY = 3;
    Circle circles[CAPACITY];

    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);

    for (int i = 0; i < CAPACITY; i++)
    {
        cout << "Information about circle " << i << endl;
        cout << "Radius: " << circles[i].getRadius() << endl;
        cout << "Area: " << circles[i].getArea() << endl;
        cout << "Perimeter: " << circles[i].getPerimeter() << endl;
    }

    return 0;
}