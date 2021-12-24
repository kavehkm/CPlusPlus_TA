#include <iostream>
using namespace std;


int main () {
    const int CAPACITY = 10;
    int numbers[CAPACITY] = {66, -6, 0, 6, 666, 1000, 559, -3, 1, -2};

    int search;
    bool found = false;
    int index;

    cout << "Please enter number to search for: ";
    cin >> search;

    for (int i = 0; i < CAPACITY; i++)
    {
        if (numbers[i] == search) {
            found = true;
            index = i;
            break;
        }
    }

    if (found) {
        cout << "number " << search << " exists in numbers array at index " << index << endl;
    } else {
        cout << "Does not exists" << endl;
    }

    return 0;
}