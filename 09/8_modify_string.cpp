#include <iostream>
#include <string>
using namespace std;


int main () {
    // string defination
    string firstName("Kaveh");
    string lastName("Mehrbanian");
    cout << "First name is: " << firstName << endl;
    cout << "Last name is: " << lastName << endl;

    // append
    firstName.append(lastName);
    cout << "First name after append: " << firstName << endl;
    // erase last name from first name
    firstName.erase(5, lastName.size());

    // insert
    lastName.insert(0, firstName);
    cout << "Last name after insert: " << lastName << endl;
    // erase first name from last name
    lastName.erase(0, firstName.size());

    // assign
    firstName.assign(lastName);
    cout << "First name after assign: " << firstName << endl;

    // clear
    firstName.clear();
    cout << "First name after clear: " << firstName << endl;

    return 0;
}