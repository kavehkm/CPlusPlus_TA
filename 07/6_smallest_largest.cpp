#include <iostream>
#include <limits>
using namespace std;


int main () {
    const int CAPACITY = 10;
    int size;
    int numbers[CAPACITY];
    
    int smallest = INT32_MAX;
    int largest = INT32_MIN;

    do
    {
        cout << "How many number do you have? ";
        cin >> size;
    } while (size > CAPACITY || size < 1);
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number" << i + 1 << ": ";
        cin >> numbers[i];
    }

    // find smallest and largest in numbers
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }

        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;

    return 0;
}