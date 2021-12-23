#include "rectangle.h"
#include <iostream>
using namespace std;


void printRect (Rectangle &rect) {
    cout << "Height: " << rect.getHeight() << endl;
    cout << "Length: " << rect.getLenght() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() <<endl;    
}


int main () {
    // instanciate
    Rectangle rect1(4.2, 5.1);
    Rectangle rect2(10.9, 3.1);
    // print
    cout << "Rectangle 1" << endl;
    printRect(rect1);
    cout << "Rectangle 2" << endl;
    printRect(rect2);

    return 0;
}