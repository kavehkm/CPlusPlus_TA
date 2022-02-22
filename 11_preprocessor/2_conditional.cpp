#include <iostream>
using namespace std;


#ifndef TABLESIZE
#define TABLESIZE 100
#endif


#ifdef TABLESIZE
#define TABLESIZE2 TABLESIZE * TABLESIZE
#endif


int main () {
    cout << "tablesize is " << TABLESIZE << endl;
    cout << "tablesize2 is " << TABLESIZE2 << endl;
    return 0;
}