#include <iostream>
using namespace std;


int main () {
    int numbers[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
    {
        cout << "value of cell " << i << " by [] notation is: " << numbers[i] << endl;
        cout << "value of cell " << i << " by pointer is: " << *(numbers + i) << endl;
    }
    
    return 0;
}