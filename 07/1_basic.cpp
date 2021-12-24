#include <iostream>
using namespace std;


int main () {
    // define some arrays
    const int CAPACITY = 10;
    int numbers[CAPACITY] = {10, 20, 30, 40, 50, 6, 7, 8, 9, 100};

    char alphabet[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'
    };

    // access members
    cout << "*ACCESS*" << endl;
    cout << "numbers[5]: " << numbers[5] << endl;
    cout << "alphabet[7]: " << alphabet[7] << endl;

    // change members value
    cout << "*CHANGE*" << endl;
    numbers[5] = 60;
    alphabet[7] = 'G';
    cout << "numbers[5]: " << numbers[5] << endl;
    cout << "alphabet[7]: " << numbers[7] << endl;

    // looping
    cout << "*LOOPING*" << endl;
    for (int i = 0; i < CAPACITY; i++)
    {
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << "alphabet[" << i << "]: " << alphabet[i] << endl;
    }
    
    return 0;
}