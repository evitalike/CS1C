#include "imports.h"
#include "item.h"
#include "container.h"

//Declare Static Variable
float container::total = 0.0;

//Constructors
container::container()
{
    items = new item;
    buyList = new int[5];
}

container::container(container &otherObj)
{
    items = new item[5];
    buyList = new int[5];
    total = 0;

    for (int x = 0; x < 5; x++)
    {
        buyList[x] = otherObj.buyList[x];
        items[x] = otherObj.items[x];
    }
}

//Destructor
container::~container()
{
    delete[] items;
    delete[] buyList;
}


//Functions
void container::printReceipt()
{
    cout << "\t>> Purchase Receipt <<" << endl;

    for (int x = 0; x < 5; x++)
    {
        if (x == 0 && buyList[0] >= 0)
        {
            cout << "Nike Shoes >        " << buyList[0] << "    $" << buyList[0] * items[0].nikeShoesPrice << endl;
            total += buyList[0] * items[0].nikeShoesPrice;
        }
        if (x == 1 && buyList[1] >= 0)
        {
            cout << "Under Armour Tee >  " << buyList[1] << "    $" << buyList[1] * items[0].armourPrice << endl;
            total += buyList[1] * items[0].armourPrice;
        }
        if (x == 2 && buyList[2] >= 0)
        {
            cout << "Brooks Shoes >      " << buyList[2] << "    $" << buyList[2] * items[0].brooksPrice << endl;
            total += buyList[2] * items[0].brooksPrice;
        }
        if (x == 3 && buyList[3] >= 0)
        {
            cout << "Asics Shoes >       " << buyList[3] << "    $" << buyList[3] * items[0].asicsPrice << endl;
            total += buyList[3] * items[0].asicsPrice;
        }
        if (x == 4 && buyList[4] >= 0)
        {
            cout << "Nike Shorts >       " << buyList[4] << "    $" << buyList[4] * items[0].nikeShortsPrice << endl;
            total += buyList[4] * items[0].nikeShortsPrice;
        }
    }
    cout << fixed << setprecision(2);

    cout << "\nSubtotal     >     $" << total << endl;
    cout << "Tax (8.25%)  >     $" << (total * tax) << endl;
    cout << "\nTotal        >     $" << total + (total * tax) << endl;
}

void container::printInventory()
{
    cout << "\t>> Inventory in Stock << " << endl;
    cout << "Nike Shoes >        " << items[0].nikeShoesQty << endl;
    cout << "Under Armour Tee >  " << items[0].armourQty << endl;
    cout << "Brooks Shoes >      " << items[0].brooksQty << endl;
    cout << "Asics Shoes >       " << items[0].asicsQty << endl;
    cout << "Nike Shorts >       " << items[0].nikeShortsQty << endl;
    cout << endl;
}

void container::purchase()
{
    cout << "\nPurchases executed.\n" << endl;

    // Customer Purchases
    buyList[0] = 2;
    buyList[1] = 3;
    buyList[2] = 1;
    buyList[4] = 4;

    // Deduct from Inventory
    items[0].nikeShoesQty -= 2;
    items[0].armourQty -= 3;
    items[0].brooksQty -= 1;
    items[0].nikeShortsQty -= 4;
}