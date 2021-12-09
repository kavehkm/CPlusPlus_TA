#include <iostream>
#include <string>
using namespace std;


int main () {
    string firstName;
    string lastName;
    string fullName;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    
    // concat firstName and lastName as fullName
    fullName = firstName + " " + lastName;
    cout << "full name is " << fullName;

    return 0;
}