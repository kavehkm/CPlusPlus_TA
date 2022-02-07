#include <iostream>
#include <string>
using namespace std;


void reverseString(string& strg) {
    string temp(strg);
    size_t size = strg.size();
    for (size_t i = 0; i < size; i++)
    {
        strg[i] = temp[size - 1 - i];
    }
    return;
}


bool isPalindrome(string& strg) {
    string temp(strg);
    reverseString(temp);
    return (temp == strg);
}


int main () {
    string text;
    cout << "Please insert text: " << endl;
    getline(cin, text);
    if (isPalindrome(text)) {
        cout << "is Palindrome" << endl;
    }
    else {
        cout << "is not Palindrome" << endl;
    }
    return 0;
}