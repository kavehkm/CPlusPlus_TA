#include <iostream>
using namespace std;


int main () {
    // define PI as const
    const double PI = 3.14159;

    // perimeter, area and radius
    double perimeter;
    double area;
    int radius;

    cout << "Enter radius of circle: ";
    cin >> radius;

    // calculate perimeter and area
    perimeter = PI * radius * 2;
    area = PI * radius * radius;

    cout << "Perimeter is: " << perimeter << endl << "Area is :" << area;

    return 0;
}