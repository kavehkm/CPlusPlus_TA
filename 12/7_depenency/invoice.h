#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"


class Invoice
{
    private:
        int invoiceNumber;
        double invoiceTotal;
    public:
        Invoice (int no);
        ~Invoice ();
        void add (int quantity, Product product);
        void print () const;
};
#endif