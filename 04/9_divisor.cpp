#include <iostream>
using namespace std;


int main () {
    int higher, lower, divisor;
    int col = 0;

    cout << "Enter higher: ";
    cin >> higher;
    cout << "Enter lower: ";
    cin >> lower;
    cout << "Enter divisor: ";
    cin >> divisor;

    for (int i = lower; i < higher; i++)
    {
        if (i % divisor == 0) {
            cout << i << " ";
            col++;
            if (col > 5) {
                cout << endl;
                col = 0;
            }
        }
    }
    
    return 0;
}