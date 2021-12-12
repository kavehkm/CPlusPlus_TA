#include <iostream>
using namespace std;


int main () {
    unsigned int num, leftDigit;
    
    cout << "Please Enter a non-negative integer: ";
    cin >> num;

    do
    {
        leftDigit = num % 10;
        num /= 10;
    } while (num > 0);
    
    cout << "The leftmost digit is: " << leftDigit << endl;

    return 0;
}