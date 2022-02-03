#include <iostream>
using namespace std;


// prototype
int sum2dArray(int (*arr)[4], int rowSize);


int main () {
    int numbers[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    cout << "sum of numbers members is: " << sum2dArray(numbers, 3);
    return 0;
}


// implementation
int sum2dArray(int (*arr)[4], int rowSize) {
    int sum = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += *(*(arr + i) + j);
        }
    }
    return sum;
}