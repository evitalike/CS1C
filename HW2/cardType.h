#ifndef CARDTYPE_H
#define CARDTYPE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class cardType {
    public:
        string getRank();
        string getSuit();
        void setInfo(string, string);
        void printCard();
        bool equals(cardType &);

    private:
        string suit;
        string rank;
};

#endif