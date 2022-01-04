#include <iostream>
using namespace std;


int main () {
    // define
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // access
    cout << "matrix[1][2]: " << matrix[0][2] << endl;
    cout << "matrix[2][3]: " << matrix[1][1] << endl;

    // modify
    matrix[0][2] = 10;
    matrix[1][1] = 100;
    cout << "matrix[1][2]: " << matrix[0][2] << endl;
    cout << "matrix[2][3]: " << matrix[1][1] << endl;

    // loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix[" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
        
    }

    return 0;
}