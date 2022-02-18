#include <iostream>
#include <fstream>
using namespace std;


int main () {
    // file object defination
    // ifstream
    ifstream myfile;
    // ofstream
    ofstream myfile2;
    // fstream
    fstream myfile3;


    // open file to write
    myfile2.open("hello.txt");
    // check for success open
    if (myfile2.is_open()) {
        // write on file
        myfile2 << "Hello world";
        // close file
        myfile2.close();
    }
    else {
        cout << "Cannot open file" << endl;
    }

    // open file to read
    myfile.open("hello.txt");
    // check
    if (myfile.is_open()) {
        string line;
        // read file line by line
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        // close file
        myfile.close();
    }
    else {
        cout << "Cannot open file" << endl;
    }


    // open fstream file
    myfile3.open("hello.txt", ios::out | ios::app);
    // check
    if (myfile3.is_open()) {
        myfile3 << '\n';
        myfile3 << "Hello again";
        // close
        myfile3.close();
    }
    else {
        cout << "Cannot open file" << endl;
    }

    return 0;
}