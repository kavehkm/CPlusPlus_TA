#include <iostream>
using namespace std;


int main () {
    // original variable
    double average = 10.06;
    // reference variable
    double& rAverage = average;

    cout << "average: " << average << endl;
    cout << "rAverage: " << rAverage << endl;

    return 0;
}