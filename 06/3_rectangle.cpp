#include <iostream>
#include <cassert>
using namespace std;


class Rectangle
{
    private:
        double length;
        double height;
    public:
        // constructors
        Rectangle (double lenght, double height);
        Rectangle (const Rectangle &rect);
        // destructor
        ~Rectangle ();
        // member functions
        void print () const;
        double getArea () const;
        double getPerimeter () const;
};

Rectangle :: Rectangle (double length, double height)
:length(length), height(height) {
    if (length <=0 || height <= 0) {
        cout << "No rectangle can be made!" << endl;
        assert(false);
    }
}

Rectangle :: Rectangle (const Rectangle &rect)
:length(rect.length), height(rect.height) {

}

Rectangle :: ~Rectangle () {

}

void Rectangle :: print () const {
    cout << "A rectangle of " << length << " by " << height << endl;
}

double Rectangle :: getArea () const {
    return length * height;
}

double Rectangle :: getPerimeter () const {
    return 2 * (length + height);
}


void printRectangle(Rectangle &rect) {
    rect.print();
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl << endl;
    return;
}


int main () {
    // instanciate some rects
    Rectangle rect1(3.0, 4.2);
    Rectangle rect2(5.1, 10.2);
    Rectangle rect3(rect1);

    cout << "Rectangle 1: " << endl;
    printRectangle(rect1);

    cout << "Rectangle 2: " << endl;
    printRectangle(rect2);

    cout << "Rectangle 3: " << endl;
    printRectangle(rect3);

    return 0;
}