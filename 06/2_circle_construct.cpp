#include <iostream>
#include <cmath>
using namespace std;


// declaration
class Circle
{
    private:
        double radius;
    public:
        // constructors
        Circle ();
        Circle (double radius);
        Circle (const Circle &circle);
        // destructor
        ~Circle ();
        // member functions
        void setRadius (double value);
        double getRadius () const;
        double getArea () const;
        double getPerimeter () const;
};

// implementation
Circle :: Circle ()
:radius(0.0) {
    cout << "The default construct was called." << endl;
}

Circle :: Circle (double radius)
:radius(radius) {
    cout << "The parameter constructor was called" << endl;
}

Circle :: Circle (const Circle &circle)
:radius(circle.radius) {
    cout << "The copy constructor was called" << endl;
}

Circle :: ~Circle () {
    cout << "The destructor was called for circle with radius: ";
    cout << radius << endl;
}

void Circle :: setRadius (double value) {
    radius = value;
    return;
}

double Circle :: getRadius () const {
    return radius;
}

double Circle :: getArea () const {
    return (M_PI * radius * radius);
}

double Circle :: getPerimeter () const {
    return (M_PI * radius * 2);
}


void printCircle(Circle &circle);


int main () {
    cout << "Circle1: " << endl;
    Circle circle1(5.2);
    printCircle(circle1);

    cout << "Circle2: " << endl;
    Circle circle2(circle1);
    printCircle(circle2);

    cout << "Circle3: " << endl;
    Circle circle3;
    printCircle(circle3);

    return 0;
}


void printCircle(Circle &circle) {
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl << endl;
    return;
}
