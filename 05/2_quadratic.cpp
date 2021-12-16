#include <iostream>
#include <cmath>
using namespace std;


int main () {
    // variable declaration
    int a, b, c;
    double delta;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // calculate delta
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "There is no root!" << endl;
    }
    else if (delta == 0) {
        cout << "The two roots are equal" << endl;
        cout << "x1 = x2 = " << -b / (2 * a) << endl;
    }
    else {
        cout << "There are two distinct roots: " << endl;
        cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
    }

    return 0;
}