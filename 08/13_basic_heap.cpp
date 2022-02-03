#include <iostream>
using namespace std;


int main () {
    // simple integer variable creation in heap memory
    int* number = 0;
    number = new int;
    *number = 100;
    cout << "address of number is: " << number << " and value is: " << *number;
    // - delete allocated memory in heap at the end
    delete number;

    return 0;
}