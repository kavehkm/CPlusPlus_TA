#include <iostream>
using namespace std;


// prototype
int arraySum(const int*, int);


int main () {
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "sum of numbers array members is: " << arraySum(numbers, 5);
    return 0;
}


// implementation
int arraySum(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}