#include <iostream>
using namespace std;


int main () {
    int sum = 5;

    cout << "sum value is: " << sum << endl;
    
    // scope
    {
        int sum = 3;
        cout << "sum value is: " << sum << endl;
    }

    cout << "sum value is: " << sum << endl;

    return 0;
}