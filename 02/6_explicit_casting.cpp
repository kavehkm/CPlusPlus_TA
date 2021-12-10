#include <iostream>
#include <typeinfo>
using namespace std;


int main () {
    int a = 100;
    long int b = 1000;
    double c = 3.14159;

    cout << "Type of (int + <int>long) 100 + 1000 is: " << typeid(a + static_cast <int> (b)).name() << endl;
    cout << "Value of (int + <int>long) 100 + 1000 is: " << a + static_cast <int> (b) << endl;

    cout << "Type of (long + <long>double) 1000 + 3.14159 is: " << typeid(b + static_cast <int> (c)).name() << endl;
    cout << "Value of (long + <long>double) 1000 + 3.14159 is: " << b + static_cast <int> (c);

    return 0;
}