#include "cardType.h"

cardType::cardType()
{
}

string cardType::getRank()
{
    return rank;
}
string cardType::getSuit()
{
    return suit;
}

void cardType::setInfo(string a, string b)
{
    suit = a;
    rank = b;
}

void cardType::printCard()
{
    cout << rank << " of " << suit << endl;
}

bool cardType::equals(cardType &otherCard)
{
    if (suit == otherCard.getSuit() && rank == otherCard.getRank())
        return true;
    else
        return false;
}