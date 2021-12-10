#include <iostream>
#include <limits>
using namespace std;


int main () {
    // get max value for unsigned int
    unsigned int num1 = numeric_limits <unsigned int> :: max();
    // get min value for unsigned int
    unsigned int num2 = numeric_limits <unsigned int> :: min();
    
    // print max and min value
    cout << "Value of max unsigned int: " << num1 << endl;
    cout << "Value of min unsigned int: " << num2 << endl;

    // increase and decrease max and min
    num1 += 1;
    num2 -= 1;

    // print overflowed values
    cout << "Value of overflowed max: " << num1 << endl;
    cout << "Value of underflowed min: " << num2 << endl;

    return 0;
}