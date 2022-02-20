#include <iostream>
#include <fstream>
using namespace std;


int main () {
    // define file object for input
    ifstream myfile;
    // open file
    myfile.open("hello.txt");
    // check
    if (myfile.is_open()) {
        // get begin and end
        streampos begin, end;
        begin = myfile.tellg();
        myfile.seekg(0, ios::end);
        end = myfile.tellg();
        // close file
        myfile.close();

        // calc size and show result
        size_t size = end - begin;
        cout << "Size of file is: " << size << " Bytes" << endl;
    }
    else {
        cout << "Cannot open file" << endl;
    }
    return 0;
}