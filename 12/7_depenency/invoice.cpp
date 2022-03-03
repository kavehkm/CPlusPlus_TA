#include "invoice.h"


Invoice :: Invoice (int no):
invoiceNumber(no), invoiceTotal(0.0) {
}

Invoice :: ~Invoice ()
{
}

void Invoice :: add (int quantity, Product product) {
    invoiceTotal += quantity * product.getPrice();
}

void Invoice :: print () const {
    cout << "Invoice number: " << invoiceNumber << endl;
    cout << "Invoice total: " << invoiceTotal << endl;
}