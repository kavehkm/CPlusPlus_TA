#include <iostream>
using namespace std;


// prototype
void swap(int*, int*);


int main () {
    int a = 100;
    int b = 200;
    cout << "before swap a is: " << a << " after swap b is: " << b << endl;
    swap(&a, &b);
    cout << "after swap a is: " << a << " after swap b is: " << b << endl;
    return 0;
}


// implementation
void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
    return;
}