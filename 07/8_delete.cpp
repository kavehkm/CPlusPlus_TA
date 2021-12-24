#include <iostream>
using namespace std;


void printArray(int numbers[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
    return;
}


void deleteMember(int numbers[], int size, int index) {
    for (int i = index + 1; i < size; i++)
    {
        numbers[i-1] = numbers[i];
    }
    return;
}


int main () {
    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = CAPACITY;
    
    int number;
    do
    {
        cout << "Enter a number to delete from numbers(1, 10): ";
        cin >> number;
    } while (number > 10 || number < 1);
    
    int numberIndex = number - 1;

    // delete member with index: numberIndex from array numbers
    deleteMember(numbers, size, numberIndex);
    size--;

    // print numbers
    printArray(numbers, size);

    return 0;
}