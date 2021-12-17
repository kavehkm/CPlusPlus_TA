#include <iostream>
using namespace std;


int num = 5;


int main () {
    cout << "global num value: " << num << endl;

    int num = 25;
    cout << "local num value: " << num << endl;

    cout << "global num value: " << ::num << endl;

    return 0;
}