#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>
#include "time.h"

class Invoice : public Time
{
public:
    friend ostream &operator<<(ostream &os, Invoice &obj);

    void printInvoice();

    Invoice();
    Invoice(int, int, int);

private:
    Time purchaseTime;
};

#endif
