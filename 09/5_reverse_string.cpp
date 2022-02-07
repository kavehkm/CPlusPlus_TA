#include <iostream>
#include <string>
using namespace std;


void reverseString(string& strg) {
    // create a copy from strg
    string strgCopy(strg);
    int size = strg.size();
    for (size_t i = 0; i < size; i++)
    {
        strg[i] = strgCopy[size - 1 - i];
    }
    return;
}


void reverseString(string* pStrg) {
    string strgCopy(*pStrg);
    int size = (*pStrg).size();
    for (size_t i = 0; i < size; i++)
    {
        (*pStrg)[i] = strgCopy[size - 1 - i];
    }
    return;
}


int main () {
    string firstName("Kaveh");
    cout << "before reverse: " << firstName << endl;
    reverseString(firstName);
    cout << "after reverse: " << firstName << endl;
    reverseString(&firstName);
    cout << "after reverse: " << firstName << endl;

    return 0;
}