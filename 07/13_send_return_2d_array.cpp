#include <iostream>
using namespace std;


void print2DArray(const int arr[][3], int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }
        
    }
    return;
}


void mult2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] *= 2;
        }
    }
    return;
}


void inc2DArray(int arr1[][3], int arr2[][3], int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr1[i][j] + 1;
        }
    }
    return;
}


int main () {
    // defination
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int incNumbers[3][3];

    // print
    print2DArray(numbers, 3);
    cout << endl;
    // multiply by 2
    mult2DArray(numbers, 3);
    // print result
    print2DArray(numbers, 3);
    cout << endl;
    // inc by 1
    inc2DArray(numbers, incNumbers, 3);
    // print result
    print2DArray(incNumbers, 3);

    return 0;
}