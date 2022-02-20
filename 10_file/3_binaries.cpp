#include <iostream>
#include <fstream>
using namespace std;


int main () {
    // example string
    string example("example string");


    // write example into binary file
    fstream myfile;
    myfile.open("example.dat", ios::binary | ios::out);
    if (!myfile.is_open()) {
        cout << "Cannot open file" << endl;
    }
    myfile.write(example.c_str(), example.size());
    myfile.close();


    // read example from binary file
    myfile.open("example.dat", ios::binary | ios::in);
    if (!myfile.is_open()) {
        cout << "Cannot open file" << endl;
    }
    myfile.seekg(0, ios::end);
    streampos size = myfile.tellg();
    myfile.seekg(0, ios::beg);
    // create array of characters on heap
    char* memblock = new char[size];
    myfile.read(memblock, size);
    myfile.close();


    cout << "example string is: " << memblock << endl;

    return 0;
}