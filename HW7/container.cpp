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
        items = new item[5];
        buyList = new int[5];

        setupDatabase();
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

    void container::setupDatabase() 
    {
        items[0].name = "Nike Shoes";
        items[0].qty = 22;
        items[0].price = 145.99;

        items[1].name = "Under Armour Tee";
        items[1].qty = 33;
        items[1].price = 29.99;

        items[2].name = "Brooks Shoes";
        items[2].qty = 11;
        items[2].price = 111.44;

        items[3].name = "Asics Shoes";
        items[3].qty = 20;
        items[3].price = 165.88;

        items[4].name = "Nike Shorts";
        items[4].qty = 77;
        items[4].price = 45.77;

    }
    void container::makePurchase()
    {
        cout << "\nPurchases executed.\n" << endl;

        // Customer Purchases
        buyList[0] = 2;
        buyList[1] = 3;
        buyList[2] = 1;
        buyList[4] = 4;

        // Deduct from Inventory
        items[0].qty -= 2;
        items[1].qty -= 3;
        items[2].qty -= 1;
        items[4].qty -= 4;
    }

    void container::printInventory()
    {
        cout << "\t>> Inventory in Stock << " << endl;
        for (int x = 0; x < 5; x++)
        {
            cout << items[x].name << " > " << items[x].qty << endl;
        }
        cout << endl;
    }

    void container::printReceipt()
    {
        cout << fixed << setprecision(2);
        cout << "\t>> Purchase Receipt <<" << endl;

        cout << "Nike Shoes (" << buyList[0] << ") > $" << buyList[0] * items[0].price << endl;
        total += buyList[0] * items[0].price;

        cout << "Under Armour Tee (" << buyList[1] << ") > $" << buyList[1] * items[1].price << endl;
        total += buyList[1] * items[1].price;

        cout << "Brooks Shoes (" << buyList[2] << ") > $" << buyList[2] * items[2].price << endl;
        total += buyList[2] * items[2].price;

        cout << "Nike Shorts (" << buyList[4] << ") > $" << buyList[4] * items[4].price << endl;
        total += buyList[4] * items[4].price;

        cout << "\nSubtotal > $" << total << endl;
        cout << "Tax (8.25%) > $" << (total * tax) << endl;
        cout << "\nTotal > $" << total + (total * tax) << endl;
    }
}
