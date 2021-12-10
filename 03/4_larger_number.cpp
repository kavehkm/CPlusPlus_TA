#include <iostream>
using namespace std;


int main () {
    int number1, number2;
    int larger;

    cout << "Enter number1: ";
    cin >> number1;

    cout << "Enter number2: ";
    cin >> number2;

    if (number1 >= number2) {
        larger = number1;
    }
    else {
        larger = number2;
    }

    cout << "The larger number is: " << larger;

    return 0;
}