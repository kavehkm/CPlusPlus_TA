#include <iostream>
#include <typeinfo>
using namespace std;


int main () {
    int a = 100;
    long int b = 1000;
    double c = 3.14159;

    cout << "Type of (int + long) 100 + 1000 is: " << typeid(a + b).name() << endl;
    cout << "Value of (int + long) 100 + 1000 is: " << a + b << endl;

    cout << "Type of (int + long + double) 100 + 1000 + 3.14159 is: " << typeid(a + b + c).name() << endl;
    cout << "Value of (int + long + double) 100 + 1000 + 3.14159 is: " << a + b + c;

    return 0;
}