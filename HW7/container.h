#ifndef container_H
#define container_H

#include "imports.h"
#include "item.h"

namespace manager
{
    class container {

        public:
            void setupDatabase();
            void printReceipt();
            void printInventory();
            void makePurchase();
            
            container();
            container(container &otherObj);
            ~container();

            
        private:
            item *items[5];
            int *buyList;
            double tax = 0.0825;
            static double total;
        

    };
}



#endif