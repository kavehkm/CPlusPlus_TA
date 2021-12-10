#include <iostream>
using namespace std;


int main () {
    int x = 2;
    cout << "x ===> " << x << endl;

    x += 5;
    cout << "x += 5 ===> " << x << endl;

    x -= 3;
    cout << "x -= 3 ===> " << x << endl;

    x *= 4;
    cout << "x *= 4 ===> " << x << endl;

    x /= 2;
    cout << "x /= 2 ===> " << x << endl;

    x %= 5;
    cout << "x %= 5 ===> " << x;

    return 0;
}