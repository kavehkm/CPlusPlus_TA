#include <iostream>
using namespace std;


int main () {
    int number;

    cout << "Enter number: ";
    cin >> number;

    if (number < 0) {
        number *= -1;
    }
    cout << "Absolute value is " << number;

    return 0;
}