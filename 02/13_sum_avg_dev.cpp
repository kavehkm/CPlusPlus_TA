#include <iostream>
using namespace std;


int main () {
    // variable declaration
    int num1, num2, num3;
    int sum;
    double avg;
    double dev1, dev2, dev3;

    // get values from user
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter num3: ";
    cin >> num3;

    // compute sum, avg and devs
    sum = num1 + num2 + num3;
    avg = static_cast <double> (sum) / 3;
    dev1 = num1 - avg;
    dev2 = num2 - avg;
    dev3 = num3 - avg;

    cout << "sum: " << sum << endl;
    cout << "avg: " << avg << endl;
    cout << "dev1: " << dev1 << endl;
    cout << "dev2: " << dev2 << endl;
    cout << "dev3: " << dev3;

    return 0;
}