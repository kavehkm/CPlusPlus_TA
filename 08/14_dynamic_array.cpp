#include <iostream>
using namespace std;


int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}


double average(int* arr, int size) {
    return static_cast<double>(sumArray(arr, size)) / size;
}


int main () {
    int capacity;
    // get capacity of marks array from user
    do
    {
        cout << "Enter number of marks that you want:" << endl;
        cin >> capacity;
    } while (capacity < 0);

    // create marks array in heap by given capacity
    int* marks = new int[capacity];

    // get marks from user
    for (int i = 0; i < capacity; i++)
    {
        cout << "Insert mark" << i + 1 << ":" << endl;
        cin >> *(marks + i);
    }

    // compute and return results
    cout << "average of marks is: " << average(marks, capacity);

    // delete array from heap
    delete[] marks;

    return 0;
}
