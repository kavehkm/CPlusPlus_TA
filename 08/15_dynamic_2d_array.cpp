#include <iostream>
using namespace std;



void print2dArray(int** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
    return;
}


int main () {
    int rows;
    int columns;

    // get rows from user
    do
    {
        cout << "Insert number of rows: " << endl;
        cin >> rows;
    } while (rows < 0);
    // create array of pointers by given rows in heap
    int** numbers = new int*[rows];
    // get columns for each row
    for (int i = 0; i < rows; i++)
    {
        do
        {
            cout << "Insert number of columns for row " << i + 1 << endl;
            cin >> columns;
        } while (columns < 0);
        // create each rows by capacity of columns
        numbers[i] = new int[columns];
        // fill each row
        for (int j = 0; j < columns; j++)
        {
            cout << "insert value for row " << i + 1 << " and column " << j + i << endl;
            cin >> numbers[i][j];
        }
        
    }

    // print 2d dynamic array back to user
    cout << "===Result===" << endl;
    print2dArray(numbers, rows, columns);

    // free allocated memory
    delete[] numbers;

    return 0;
}