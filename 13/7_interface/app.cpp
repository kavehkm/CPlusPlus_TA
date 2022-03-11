#include "square.h"
#include "rect.h"
#include "triangle.h"
#include "circle.h"


int main () {
    cout << "Information about square:" << endl;
    Square square(5);
    square.print();
    cout << "Area: " << square.getArea() << endl;
    cout << "Perimeter: " << square.getPerimeter() << endl;
    cout << endl;

    cout << "Information about rectangle:" << endl;
    Rect rect(5, 4);
    rect.print();
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;
    cout << endl;

    cout << "Information about triangle:" << endl;
    Triangle triangle(3, 4, 5);
    triangle.print();
    cout << "Area: " << triangle.getArea() << endl;
    cout << "Perimeter: " << triangle.getPerimeter() << endl;
    cout << endl;

    cout << "Information about circle: " << endl;
    Circle circle(5);
    circle.print();
    cout << "Area: " << circle.getArea() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;
    cout << endl;

    return 0;
}