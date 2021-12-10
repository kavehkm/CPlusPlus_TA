#include <iostream>
#include <limits>
using namespace std;


int main () {
    // get max value of signed int
    int num1 = numeric_limits <int> :: max();
    // get min value of signed int
    int num2 = numeric_limits <int> :: min();

    // print min and max value
    cout << "Value of max int: " << num1 << endl;
    cout << "Value of min int: " << num2 << endl;

    // increase and decrease max and min
    num1 += 1;
    num2 -= 1;

    // print overflowed values
    cout << "Value of overflowed max int: " << num1 << endl;
    cout << "Value of underflowed min int: " << num2 << endl;

    return 0;
}