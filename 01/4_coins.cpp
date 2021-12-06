#include <iostream>
using namespace std;


int main() {
    // define constants
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dollarValue = 100;
    // define variables
    unsigned int pennies;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;
    unsigned long int totalValue;
    // get number of each coin from user
    cout << "enter number of pennies: ";
    cin >> pennies;
    cout << "enter number of nickels: ";
    cin >> nickels;
    cout << "enter number of dimes: ";
    cin >> dimes;
    cout << "enter number of quanters: ";
    cin >> quarters;
    cout << "enter number of dollars: ";
    cin >> dollars;
    // compute values
    totalValue = pennyValue * pennies + nickelValue * nickels +
        dimeValue * dimes + quarterValue * quarters + dollarValue * dollars;
    // show result
    cout << "the total value is: " << totalValue;

    return 0;
}