#include <iostream>
using namespace std;


int main () {
    // variable declaration
    int sum = 0;
    int num;

    cout << "Enter the first integer(EOF to stop): ";
    while (cin >> num) {
        sum += num;
        cout << "Enter next integer: ";
    }

    // output result
    cout << "The sum is: " << sum;

    return 0;
}