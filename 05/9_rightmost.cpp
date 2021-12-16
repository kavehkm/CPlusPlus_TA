#include <iostream>
using namespace std;


int getData() {
    int data;
    do
    {
        cout << "Enter data: ";
        cin >> data;
    } while (data <= 0);
    return data;
}


int main () {
    int number = getData();
    cout << "right-most digit of " << number << " is " << number % 10 << endl;
    return 0;
}