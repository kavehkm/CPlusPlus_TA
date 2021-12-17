#include <iostream>
using namespace std;


void myFunction () {
    // defination
    int num = 1;
    static int counter = 1;

    // increase
    num += 1;
    counter += 1;
    
    // print
    cout << "Value of num is: " << num << endl;
    cout << "Value of counter is: " << counter << endl;

    return;
}

int main () {
    myFunction();
    myFunction();
    myFunction();

    return 0;
}