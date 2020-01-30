#include <iostream>
#include "time.h"
#include "extendedTime.h"
#include "invoice.h"

int main()
{
    system("clear");
    ExtendedTime time(5, 40, 23, EASTERN);
    Invoice receipt(12, 8, 56);

    cout << time;
    cout << endl;
    cout << receipt;
    cout << endl;

    return 0;
}
