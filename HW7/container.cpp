#include "imports.h"
#include "item.h"
#include "container.h"

namespace manager 
{
    //Declare Static Variable
    double container::total = 0.0;

    //Constructors
    container::container()
    {
        items = new item;
        buyList = new int[5];
    }

    container::container(container &otherObj)
    {
        //Create the copy lists of new type
        items = new item[5];
        buyList = new int[5];
        total = 0;

        //Copy the information over
        for (int x = 0; x < 5; x++)
        {
            items[x] = otherObj.items[x];
            buyList[x] = otherObj.buyList[x];
        }
    }

    //Destructor
    container::~container()
    {
        delete [] items;
        delete [] buyList;
    }


    //Functions
    void container::makePurchase()
    {
        cout << "\nPurchases executed.\n" << endl;

        // Customer Purchases
        buyList[0] = 2;
        buyList[1] = 3;
        buyList[2] = 1;
        buyList[4] = 4;

        // Deduct from Inventory
        items[0].numNikeShoes -= 2;
        items[0].numArmourShirt -= 3;
        items[0].numBrookShoes -= 1;
        items[0].numNikeShorts -= 4;
    }

    void container::printInventory()
    {
        cout << "\t>> Inventory in Stock << " << endl;
        cout << "Nike Shoes > " << items[0].numNikeShoes << endl;
        cout << "Under Armour Tee > " << items[0].numArmourShirt << endl;
        cout << "Brooks Shoes > " << items[0].numBrookShoes << endl;
        cout << "Asics Shoes > " << items[0].numAsics << endl;
        cout << "Nike Shorts > " << items[0].numNikeShorts << endl;
        cout << endl;
    }

    void container::printReceipt()
    {
        cout << fixed << setprecision(2);
        cout << "\t>> Purchase Receipt <<" << endl;

        cout << "Nike Shoes (" << buyList[0] << ") > $" << buyList[0] * items[0].nikeShoesCost << endl;
        total += buyList[0] * items[0].nikeShoesCost;

        cout << "Under Armour Tee (" << buyList[1] << ") > $" << buyList[1] * items[0].armourCost << endl;
        total += buyList[1] * items[0].armourCost;

        cout << "Brooks Shoes (" << buyList[2] << ") > $" << buyList[2] * items[0].brooksCost << endl;
        total += buyList[2] * items[0].brooksCost;

        cout << "Asics Shoes (" << buyList[3] << ") > $" << buyList[3] * items[0].asicsCost << endl;
        total += buyList[3] * items[0].asicsCost;

        cout << "Nike Shorts (" << buyList[4] << ") > $" << buyList[4] * items[0].nikeShortsCost << endl;
        total += buyList[4] * items[0].nikeShortsCost;

        cout << "\nSubtotal > $" << total << endl;
        cout << "Tax (8.25%) > $" << (total * tax) << endl;
        cout << "\nTotal > $" << total + (total * tax) << endl;
    }
}
