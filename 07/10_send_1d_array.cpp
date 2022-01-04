#include <iostream>
using namespace std;


// prototypes
void printArray(const int arr[], int size);
void mult2Array(int arr[], int size);


int main () {
    // numbers
    int numbers[5] = {1, 2, 3, 4, 5};
    // test printArray
    printArray(numbers, 5);
    // edit numbers by multArray
    mult2Array(numbers, 5);
    // check result by printArray
    printArray(numbers, 5);
    return 0;
}


// implementations
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
}

void mult2Array(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}
