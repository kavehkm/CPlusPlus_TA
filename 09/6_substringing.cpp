#include <iostream>
#include <string>
using namespace std;


int main () {
    string name("Kaveh Mehrbanian");
    cout << "Full name is: " << name << endl;
    string firstName(name.substr(0, 5));
    cout << "First name is: " << firstName << endl;
    string lastName(name.substr(6, name.size() - 1));
    cout << "Last name is: " << lastName << endl;

    return 0;
}