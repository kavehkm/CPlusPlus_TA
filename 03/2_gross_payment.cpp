#include <iostream>
using namespace std;


int main () {
    // variable declaration
    double hours;
    double rate;
    double regularPay;
    double overPay;
    double total;

    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> rate;

    // calculate regular pay
    regularPay = hours * rate;
    overPay = 0.0;

    // check for over pay
    if (hours > 40.0) {
        overPay = (hours - 40.0) * rate * 0.30;
    }

    // calc total pay
    total = regularPay + overPay;

    // return results to user
    cout << "Regular pay: " << regularPay << endl;
    cout << "Over pay: " << overPay << endl;
    cout << "Total pay: " << total;

    return 0;
}