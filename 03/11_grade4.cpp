#include <iostream>
using namespace std;


int main () {
    char grade;
    cout << "Enter your grade(A,B,C,D,F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            cout << "You passed";
            break;
        case 'D':
        case 'F':
            cout << "You failed";
            break;
        default:
            cout << "Invalid grade";
    }
    return 0;
}