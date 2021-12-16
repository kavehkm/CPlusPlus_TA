#include <iostream>
using namespace std;


int larger(int a, int b) {
    int max = a >= b ? a : b;
    return max;
}


int main () {
    // variable declaration
    int first, second;

    // get first and second from user
    cout << "Please first number: ";
    cin >> first;
    cout << "Please second number: ";
    cin >> second;

    cout << "Larger is: " << larger(first, second) << endl;

    return 0;
}