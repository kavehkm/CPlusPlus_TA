#include <iostream>
#include <typeinfo>
using namespace std;


int main () {
    bool a = true;
    char b = 'A';
    short c = 10;
    float f = 3.14159;


    cout << "Type of true + 100 is: " << typeid(a + 100).name() << endl;
    cout << "Value of true + 100 is: " << a + 100 << endl;

    cout << "Type of 'A' + 100 is: " << typeid(b + 100).name() << endl;
    cout << "Value of 'A' + 100 is: " << b + 100 << endl;

    cout << "Type of (short)10 + 100 is: " << typeid(c + 100).name() << endl;
    cout << "Value of (short)10 + 100 is: " << c + 100 << endl;

    cout << "Type of (float)3.14159 + 100.100 is: " << typeid(f + 100.100).name() << endl;
    cout << "Value of (float)3.14159 + 100.100 is: " << f + 100.100 << endl;

    return 0;
}