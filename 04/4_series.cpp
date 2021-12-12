#include <iostream>
using namespace std;


int main () {
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n;

    cout << "Please enter value of n: ";
    cin >> n;

    int counter = 1;
    while (counter <= n) {
        sum1 += counter;
        sum2 += counter * counter;
        sum3 += counter * counter * counter;

        // update counter
        counter++;
    }

    cout << "Value of sum1: " << sum1 << endl;
    cout << "Value of sum2: " << sum2 << endl;
    cout << "Value of sum3: " << sum3 << endl;

    return 0;
}