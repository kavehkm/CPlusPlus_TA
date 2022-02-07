#include <iostream>
#include <string>
using namespace std;


int main () {
    // assign
    string firstName = "Kaveh";
    string lastName = "Mehrbanian";
    cout << firstName << " " << lastName << endl;

    // addition
    string name = firstName + " " + lastName;
    cout << name << endl;

    // compound
    firstName += " ";
    firstName += lastName;
    cout << firstName << endl;

    return 0;
}