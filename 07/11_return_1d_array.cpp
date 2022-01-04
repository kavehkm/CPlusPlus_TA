#include <iostream>
using namespace std;


void reverseArray(const int arra1[], int arr2[], int size) {
    for (int i = 0; i < size; i++)
    {
        arr2[size - i - 1] = arra1[i];
    }
    return;
}


void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return;
}


int main () {
    // numbers and reverse
    int numbers[5] = {1, 2, 3, 4, 5};
    int numbersRev[5];

    printArray(numbers, 5);
    reverseArray(numbers, numbersRev, 5);
    printArray(numbersRev, 5);

    return 0;
}