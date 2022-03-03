#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;


class Product
{
    private:
        string name;
        double unitPrice;
    public:
        Product (string n, double up);
        ~Product ();
        double getPrice () const;
};
#endif