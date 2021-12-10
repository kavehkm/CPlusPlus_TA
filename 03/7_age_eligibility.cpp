#include <iostream>
using namespace std;


int main () {
    int age;
    bool eligible;

    cout << "Enter your age: ";
    cin >> age;

    eligible = age >= 25 && age <= 100;

    if (eligible) {
        cout << "You are eligible to rent a car";
    }
    else {
        cout << "Sorry! You are not eligible to rent a car";
    }

    return 0;
}