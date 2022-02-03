#include <iostream>
using namespace std;


int main () {
    // null pointer: pointer to nowehre
    int* pNumber = 0;
    cout << "pNumber point to " << pNumber << endl;
    int number = 100;
    pNumber = &number;
    cout << "pNumber point to " << pNumber << endl;


    // void pointer: generic pointer
    int mark = 20;
    double average = 18.75;
    void* p = &mark;
    cout << "p point into address of integer: " << p << endl;
    p = &average;
    cout << "now p point into address of double: " << p << endl;
    return 0;
}