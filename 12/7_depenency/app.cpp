#include "invoice.h"


int main () {
    // create some products
    Product product1("Table", 150.00);
    Product product2("Chair", 80.00);

    // create invoice
    Invoice invoice(1000);
    invoice.add(1, product1);
    invoice.add(6, product2);

    invoice.print();
    return 0;
}