#include "imports.h"
#include "item.h"
#include "container.h"

static void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

static void clear()
{
    system("clear");
}

float container::total = 0.0;

container::container()
{
    items = new item;
    buying = new int[5];
}

container::container(container &otherObj)
{
    items = new item;
    buying = new int[5];
    total = 0.0;

    for (int i = 0; i < 5; i++)
    {
        buying[i] = otherObj.buying[i];
    }
}

container::~container()
{
    delete[] items;
    delete[] buying;
}

void container::printReceipt()
{
    cout << "~ RECEIPT~" << endl;

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
            if (buying[0] != 0)
            {
                cout << "NIKE BASKETBALL SHOES:  " << buying[0] << "    $" << buying[0] * items[0].nikeShoesPrice
                          << endl;
                total += buying[0] * items[0].nikeShoesPrice;
            }
            break;
        case 1:
            if (buying[1] != 0)
            {
                cout << "UNDER ARMOUR T-SHIRTS:  " << buying[1] << "    $" << buying[1] * items[0].armourPrice
                          << endl;
                total += buying[1] * items[0].armourPrice;
            }
            break;
        case 2:
            if (buying[2] != 0)
            {
                cout << "BROOKS RUNNING SHOES:   " << buying[2] << "    $" << buying[2] * items[0].brooksPrice
                          << endl;
                total += buying[2] * items[0].brooksPrice;
            }
            break;
        case 3:
            if (buying[3] != 0)
            {
                cout << "ASICS RUNNING SHOES:    " << buying[3] << "    $" << buying[3] * items[0].asicsPrice
                          << endl;
                total += buying[3] * items[0].asicsPrice;
            }
            break;
        case 4:
            if (buying[4] != 0)
            {
                cout << "NIKE SHORTS:            " << buying[4] << "    $" << buying[4] * items[0].nikeShortsPrice
                          << endl;
                total += buying[4] * items[0].nikeShortsPrice;
            }
            break;
        }
    }
    cout << fixed << setprecision(2);

    cout << "\nSUB TOTAL    :     $" << total << endl;
    cout << "TAX (8.25%)  :     $" << (total * tax) << endl;
    cout << "\nTOTAL        :     $" << total + (total * tax) << endl;
}

void container::printInventory()
{
    cout << ">> Inventory in Stock << " << endl;
    cout << "NIKE BASKETBALL SHOES:  " << items[0].nikeShoesQty << endl;
    cout << "UNDER ARMOUR T-SHIRTS:  " << items[0].armourQty << endl;
    cout << "BROOKS RUNNING SHOES:   " << items[0].brooksQty << endl;
    cout << "ASICS RUNNING SHOES:    " << items[0].asicsQty << endl;
    cout << "NIKE SHORTS:            " << items[0].nikeShortsQty << endl;
    cout << endl;
}

void container::purchase()
{
    // Display current inventory prior to purchase
    clear();
    printInventory();

    // Customer Purchases
    buying[0] = 2;
    buying[1] = 3;
    buying[2] = 1;
    buying[4] = 4;

    // Deduct from Inventory
    items[0].nikeShoesQty -= 2;
    items[0].armourQty -= 3;
    items[0].brooksQty -= 1;
    items[0].nikeShortsQty -= 4;

    // Display current inventory after purchase
    printInventory();
    pause();
}