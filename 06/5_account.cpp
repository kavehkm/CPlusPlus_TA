#include <iostream>
#include <cassert>
using namespace std;


class Account {
    private:
        long unsigned int accNumber;
        double balance;
        static int base;
    public:
        // constructors
        Account (double balance);
        Account ();
        Account (const Account &acc);
        // destructor
        ~Account ();
        // member functions
        double getBalance () const;
        void deposit (double amount);
        void withdraw (double amount);

};

// initialize static base
int Account :: base = 0;

Account :: Account (double balance)
:balance(balance) {
    if (balance < 0.0) {
        cout << "Balance is nagative; program terminates" << endl;
        assert(false);
    }
    base++;
    accNumber = 100000 + base;
}

Account :: Account ()
:balance(0.0) {
    base++;
    accNumber = 100000 + base;
}

Account :: Account (const Account &acc)
:balance(acc.getBalance()) {
    base++;
    accNumber = 10000 + base;
}

Account :: ~Account () {
    base--;
}

double Account :: getBalance () const {
    return balance;
}

void Account :: deposit (double amount) {
    if (amount > 0.0) {
        balance += amount;
    } else {
        cout << "Transaction aborted" << endl;
    }
}

void Account :: withdraw (double amount) {
    if (amount > balance) {
        amount = balance;
    }
    balance -= amount;
}


int main () {
    // create some accounts
    Account acc1(1000);
    Account acc2(2000);
    Account acc3(5000);
    // transactions
    acc1.deposit(150);
    acc2.withdraw(500);
    acc3.withdraw(500);
    // results
    cout << "Account1 balance is: $" << acc1.getBalance() << endl;
    cout << "Account2 balance is: $" << acc2.getBalance() << endl;
    cout << "Account3 balance is: $" << acc3.getBalance() << endl;

    return 0;
}