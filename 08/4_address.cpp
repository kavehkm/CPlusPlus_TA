#include <iostream>
using namespace std;


int main () {
    bool flag = false;
    int score = 92;
    double average = 15.75;


    cout << "Variable of type bool:" << endl;
    cout << "Size: " << sizeof(flag) << endl;
    cout << "Value: " << flag << endl;
    cout << "Address:" << &flag << endl;

    cout << "Variable of type integer:" << endl;
    cout << "Size: " << sizeof(score) << endl;
    cout << "Value: " << score << endl;
    cout << "Address: " << &score << endl;

    cout << "Variable of type double:" << endl;
    cout << "Size: " << sizeof(average) << endl;
    cout << "Value: " << average << endl;
    cout << "Address: " << &average << endl;

    return 0;
}