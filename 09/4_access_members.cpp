#include <iostream>
#include <string>
using namespace std;


int main () {
    // string defination
    string firstName("Kaveh");
    // get access to second char: 'a'
    char second = firstName[1];
    cout << "Second charcter of " << firstName << " is: " << second << endl;
    // change second character:
    second = 'u';
    firstName[1] = second;
    cout << "Second character of " << firstName << " is: " << second << endl;

    return 0;
}