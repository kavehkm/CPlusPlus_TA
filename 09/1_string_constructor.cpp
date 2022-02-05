#include <iostream>
#include <string>
using namespace std;


int main () {
    // empty string
    string emptyString;
    // initial value
    string name("Kaveh Mehrbanian");
    // a * 5 string
    string a5(5, 'a');
    string hell("Hello world", 4);

    cout << emptyString << endl;
    cout << name << endl;
    cout << a5 << endl;
    cout << hell << endl;


    // copy constructor
    string myName(name);
    string firstName(name, 0, 5);
    string lastName(name, 6);

    cout << "my name is: " << myName << endl;
    cout << "first name is: " << firstName << endl;
    cout << "last name is: " << lastName << endl;

    return 0;
}