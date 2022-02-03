#include <iostream>
using namespace std;


int main () {
    double averages[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "address of cell " << i << " by array name is: " << averages + i << endl;
        cout << "address of cell " << i << " by address-of operator is: " << &averages[i] << endl;
    }
    return 0;
}