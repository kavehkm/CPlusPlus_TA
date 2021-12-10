#include <iostream>
using namespace std;


int main () {
    int score;
    cout << "Enter a score between 0 and 100: ";
    cin >> score;

    if (score >= 70) {
        cout << "Grade is pass" << endl;
    }
    else {
        cout << "Grade is nopass" << endl;
    }
    
    return 0;
}