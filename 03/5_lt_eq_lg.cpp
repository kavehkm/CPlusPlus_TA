#include <iostream>
using namespace std;


int main () {
    int number1, number2;

    cout << "Enter number1: ";
    cin >> number1;

    cout << "Enter number2: ";
    cin >> number2;

    if (number1 >= number2) {
        if (number1 > number2) {
            cout << number1 << " > " << number2;
        }
        else {
            cout << number1 << " == " << number2;
        }
    }
    else {
        cout << number1 << " < " << number2;
    }

    return 0;
}