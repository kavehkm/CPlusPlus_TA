#include <iostream>
using namespace std;


// swap prototype
void swap(int&, int&);


int main () {
    int x = 10;
    int y = 20;
    cout << "before swap x is: " << x << " and y is: " << y << endl;
    swap(x, y);
    cout << "after swap x is: " << x << " and y is: " << y << endl;
    return 0;
}


// swap implementation
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}