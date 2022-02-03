#include <iostream>
using namespace std;


int main () {
    // case 1: variable editable by own and pointer
    int number = 100;
    int* pNumber = &number;
    cout << number << " --- " << *pNumber << endl;
    number += 1;
    cout << number << " --- " << *pNumber << endl;
    *pNumber += 1;
    cout << number << " --- " << *pNumber << endl;

    // case 2: variable readonly and cannot edit through pointer
    const int number1 = 200;
    const int* pNumber1 = &number1;
    cout << number1 << " --- " << *pNumber1 << endl;

    // case 3: variable editable and cannot edit through pointer
    int number2 = 300;
    const int* pNumber2 = &number2;
    cout << number2 << " --- " << *pNumber2 << endl;
    number2 += 3;
    cout << number2 << " --- " << *pNumber2 << endl;

    // case 4: variable readonly and editable through pointer! : COMPILE ERROR

    // case 5: changable pointer
    int number3 = 1000;
    int number4 = 2000;
    int* pNumber34 = &number3;
    cout << number3 << " --- " << *pNumber34 << endl;
    // change binding...
    pNumber34 = &number4;
    cout << number4 << " --- " << *pNumber34 << endl;


    // case 6: unchangable pointer
    int number5 = 3000;
    int number6 = 4000;
    int* const pNumber56 = &number5;
    cout << number5 << " --- " << *pNumber56 << endl;
    // change binding... // COMPILE ERROR
    // pNumber56 = &number6;
    // cout << number6 << " --- " << *pNumber56 << endl;
    return 0;
}