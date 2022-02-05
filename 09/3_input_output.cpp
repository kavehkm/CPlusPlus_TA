#include <iostream>
#include <string>
using namespace std;


int main () {
    // defination
    string firstName("Kaveh");
    string lastName;
    string text;

    // output
    cout << firstName << endl;

    // without space and newline intput
    cout << "Insert last name: " << endl;
    cin >> lastName;
    cout << "Last name is: " << lastName << endl;

    // with space and newline
    cout << "Insert text: " << endl;
    // ignore newline of above ^
    cin.ignore();
    getline(cin, text);
    cout << "text is: " << text << endl;

    return 0;
}