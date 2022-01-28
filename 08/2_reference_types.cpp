#include <iostream>
using namespace std;


int main () {
    // case 1: original and reference editable
    char x = 97;
    char& rX = x;
    cout << x << " ---- " << rX << endl;
    x += 2;
    cout << x << " ---- " << rX << endl;
    rX += 2;
    cout << x << " ---- " << rX << endl;


    // case2: original and reference readonly
    const int y = 1;
    const int& rY = y;
    cout << y << " ---- " << rY << endl;


    // case3: origin editable and reference readonly
    double z = 3.141596;
    const double& rZ = z;
    cout << z << " ---- " << rZ << endl;
    z += 2;
    cout << z << " ---- " << rZ << endl;


    // case4: origin readonly and reference editable: COMPILE ERROR

    return 0;
}