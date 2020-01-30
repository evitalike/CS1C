#include "time.h"
#include "invoice.h"

Invoice::Invoice()
{
    purchaseTime.setTime(0, 0, 0);
}

Invoice::Invoice(int hours, int minutes, int seconds)
{
    purchaseTime.setTime(hours, minutes, seconds);
}

void Invoice::printInvoice()
{
    purchaseTime.printTime();
}

std::ostream &operator<<(ostream &os, Invoice &obj)
{
    obj.printInvoice();
    return os;
}