#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


class Animal {};
class Horse {};


int main () {
    Animal a;
    Horse h;

    cout << typeid(a).name() << endl;
    cout << typeid(h).name() << endl;
    return 0;
}