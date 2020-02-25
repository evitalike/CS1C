#ifndef container_H
#define container_H

#include "imports.h"
#include "item.h"

class container {

    public:

        void populateInventory();
        void printReceipt();
        void printInventory();
        void purchase();
        
        container();
        container(container &otherObj);
        ~container();

        
    private:
        item *items;
        int *buyList;
        float tax = 0.0825;
        static float total;
    

};


#endif