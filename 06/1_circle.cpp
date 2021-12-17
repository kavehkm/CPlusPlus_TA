#include <iostream>
#include <cmath>
using namespace std;

// declaration
class Circle
{
    private:
        double radius;
    public:
        double getRadius () const;
        double getArea () const;
        double getPerimeter () const;
        void setRadius (double value);
};


// implementation
double Circle :: getRadius () const {
    return radius;
}

double Circle :: getArea () const {
    return (M_PI * radius * radius);
}

double Circle :: getPerimeter () const {
    return (M_PI * radius * 2);
}

void Circle :: setRadius (double value) {
    radius = value;
    return;
}


int main () {
    // create first circle object
    cout << "Circle1: " << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle2: " << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;

    return 0;
}


