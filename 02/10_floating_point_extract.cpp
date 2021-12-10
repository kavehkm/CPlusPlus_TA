#include <iostream>
using namespace std;

int main () {
    double num1;
    int intPart;
    double fractPart;

    // get floating point number from user
    cout << "Enter a floating-point number: ";
    cin >> num1;

    // extract floating point part
    intPart = static_cast <int> (num1);
    fractPart = num1 - intPart;

    cout << "Original number is: " << num1 << endl;
    cout << "Int part is: " << intPart << endl;
    cout << "Fract part is: " << fractPart << endl;

    return 0;
}