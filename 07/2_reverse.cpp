#include <iostream>
using namespace std;


int main () {
    // numbers capacity
    const int CAPACITY = 10;
    int numbers[CAPACITY];
    // number size
    int size;

    do
    {
        cout << "Please the size(1 and 10): ";
        cin >> size;
    } while (size < 1 || size > CAPACITY);
    
    cout << "Enter " << size << " integer(s):" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Integers(s) in reversed order:" << endl;
    for (int i = size-1; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }
    
    return 0;
}