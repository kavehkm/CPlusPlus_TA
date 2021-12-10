#include <iostream>
using namespace std;


int main () {
    // declare required variables
    unsigned int num1;
    unsigned int firstDigit;

    cout << "Enter number: ";
    cin >> num1;

    // extract first digit by division
    firstDigit = num1 % 10;

    cout << "First digit of " << num1 << " is: " << firstDigit << endl;

    return 0;
}