#include <iostream>
using namespace std;


int main () {
    int n;
    int counter = 0;

    cout << "Please enter value of n: ";
    cin >> n;

    while (counter < n) {
        cout << counter << endl;
        counter++;
    }

    return 0;
}