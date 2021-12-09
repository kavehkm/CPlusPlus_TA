#include <iostream>
using namespace std;


int main() {
    int transaction;
    int balance = 0;

    cout << "enter value of first transaction: ";
    cin >> transaction;
    balance += transaction;

    cout << "enter value of second transaction: ";
    cin >> transaction;
    balance += transaction;

    cout << "enter value of third transaction: ";
    cin >> transaction;
    balance += transaction;

    cout << "balance is: " << balance;

    return 0;
}