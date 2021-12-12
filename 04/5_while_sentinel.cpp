#include <iostream>
using namespace std;


int main () {
    int sum = 0;
    int number;

    cout << "Please Enter number value(-1 to stop): ";
    cin >> number;

    while (number != -1) {
        sum += number;
        cout << "Please Enter number value(-1 to stop): ";
        cin >> number;
    }

    cout << "Sum of numbers that entered is: " << sum;

    return 0;
}