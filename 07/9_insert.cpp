#include <iostream>
using namespace std;


void printArray(int numbers[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
    return;
}


void insertMember(int numbers[], int size, int index, int member) {
    for (int i = size - 1; i > index; i--)
    {
        numbers[i] = numbers[i-1];
    }
    numbers[index] = member;

    return;
}


int main () {
    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = CAPACITY;

    int number;
    cout << "Please enter new number to insert into numbers: ";
    cin >> number;
    
    int index;
    do
    {
        cout << "Where are you want to insert(0, 9): ";
        cin >> index;
    } while (index > 9 || index < 0);
    

    insertMember(numbers, size, index, number);

    printArray(numbers, size);

    return 0;
}