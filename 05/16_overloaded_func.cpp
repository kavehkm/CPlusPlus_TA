#include <iostream>
using namespace std;


int max(int num1, int num2);
int max(int num1, int num2, int num3);
int max(int num1, int num2, int num3, int num4);


int main () {
    cout << "max (5, 7): " << max(5, 7) << endl;
    cout << "max (7, 9, 8): " << max(7, 9, 8) << endl;
    cout << "max (14, 3, 12, 11): " << max(14, 3, 12, 11);
    return 0;
}


int max (int num1, int num2) {
    int m = num1 >= num2 ? num1 : num2;
    return m;
}

int max (int num1, int num2, int num3) {
    return max(num1, max(num2, num3));
}

int max (int num1, int num2, int num3, int num4) {
    return max(num1, max(num2, num3, num4));
}
