#include <iostream>
using namespace std;


bool isEven(int number) {
    bool even = number % 2 == 0 ? true : false;
    return even;
}


int main () {
    int number;
    cout << "Please Enter a number to check: ";
    cin >> number;

    if (isEven(number)) {
        cout << number << " is Even" << endl;
    }
    else {
        cout << number << " is Odd" << endl;
    }

    return 0;
}