#include <iostream>
#include <cmath>
using namespace std;


int main () {
    const double PI = 3.14159265358979;
    int n;
    double s, peri, area;

    do
    {
        cout << "Enter the number sides(4 or more): ";
        cin >> n;
    } while (n < 4);

    do
    {
        cout << "Enter length of each side: ";
        cin >> s;
    } while (s <= 0.0);
    
    // calculating perimeter and area
    peri = n * s;
    area = (n * pow(s, 2)) / (n * tan(PI / n));
    
    cout << "Perimeter: " << peri << endl;
    cout << "Area: " << area << endl;

    return 0;
}