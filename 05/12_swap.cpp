#include <iostream>
using namespace std;


void swap(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
    return;
}


int main () {
    int a = 10;
    int b = 100;

    cout << "Before swap a is: " << a << " and b is: " << b << endl;
    swap(a, b);
    cout << "After swap a is: " << a << " and b is: " << b << endl;
    return 0;
}