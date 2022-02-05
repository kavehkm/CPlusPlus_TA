#include <iostream>
#include <string>
using namespace std;


int main () {
    // string defination
    string firstName("Kaveh");

    // size and empty
    cout << "first name is: " << firstName << endl;
    cout << "first name length is: " << firstName.size() << endl;
    if (firstName.empty()) {
        cout << "first name is empty" << endl;
    }
    else {
        cout << "first name is not empty" << endl;
    }
    // system maxsize for string
    cout << "first name max size is: " << firstName.max_size() << endl;
    // firstName reserved capacity
    cout << "first name capacity is: " << firstName.capacity() << endl;

    return 0;
}