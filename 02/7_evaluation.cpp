#include <iostream>
using namespace std;


int main () {
    // group1:
    cout << "Result of expression 5 + 7 * 4: " << 5 + 7 * 4 << endl;
    cout << "Result of expression 5 - 15 % 4: " << 5 - 15 % 4 << endl;
    cout << "Result of expression (x + 6) * 7: " << (1 + 6) * 7 << endl;
    cout << "Result of expression 5 - 30 / 4 * 8 + 10: " << 5 - 30 / 4 * 8 + 10 << endl;

    // group2:
    int x = 8;
    int y = 10;
    y *= x + 5;
    cout << "Value of y is " << y << endl;

    // group3:
    int s = 10;
    int t = 20;
    t += s *= 40;
    cout << "Value of s is " << s << endl;
    cout << "Value of t is " << t << endl;

    return 0;
}