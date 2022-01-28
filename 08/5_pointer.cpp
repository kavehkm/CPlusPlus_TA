#include <iostream>
using namespace std;


int main () {
    // define a variable of type integer
    int score = 92;
    // define a variable of type pointer into integer
    int* pScore;
    // initialize pointer with address of a variable
    pScore = &score;

    cout << "Value of original score is: " << score << endl;
    cout << "Address of score is: " << pScore << endl;
    cout << "Value of score by pScore is: " << *pScore << endl;

    return 0;
}