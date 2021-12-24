#include <iostream>
using namespace std;


int sum(int numbers[], int size);


int main () {
    const int CAPACITY = 10;
    int size;
    int numbers[CAPACITY];

    do
    {
        cout << "How many number you want to enter?(1, " << CAPACITY << ")";
        cin >> size;
    } while (size > CAPACITY || size < 1);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number" << i + 1 << ": ";
        cin >> numbers[i];
    }

    // calculate sum and average
    int sumOfNumbers = sum(numbers, size);
    double averageOfNumbers = static_cast <double> (sumOfNumbers) / size;

    // print out result to user
    cout << "Sum of numbers is: " << sumOfNumbers << endl;
    cout << "Average of numbers is: " << averageOfNumbers << endl;
    
    return 0;
}


int sum(int numbers[], int size) {
    int s = 0;

    for (int i = 0; i < size; i++)
    {
        s += numbers[i];
    }

    return s;
}
