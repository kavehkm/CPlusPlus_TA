#ifndef NAME_H
#define NAME_H
#include <iostream>
#include <cassert>
#include <string>
using namespace std;


class Name
{
    private:
        string first;
        string init;
        string last;
    public:
        Name (string f, string i, string l);
        ~Name ();
        void print () const;
};
#endif