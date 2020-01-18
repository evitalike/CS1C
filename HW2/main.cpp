#include "cardType.h"

void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void clear()
{
    system("clear");
}

string clubs = "Clubs", diamonds = "Diamonds", hearts = "Hearts", spades = "Spades";
string A = "Ace", K = "King", Q = "Queen", J = "Jack";

void initializeDeck(cardType cards[])
{
    clear();
    cout << "LOADING DECK..." << endl;
    int z = 0;
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 13; y++)
        {

            if (x == 0)
            {
                if (y == 0)
                {
                    cards[z].setInfo(clubs, A);
                    z++;
                }
                else if (y == 1)
                {
                    cards[z].setInfo(clubs, "2");
                    z++;
                }
                else if (y == 2)
                {
                    cards[z].setInfo(clubs, "3");
                    z++;
                }
                else if (y == 3)
                {
                    cards[z].setInfo(clubs, "4");
                    z++;
                }
                else if (y == 4)
                {
                    cards[z].setInfo(clubs, "5");
                    z++;
                }
                else if (y == 5)
                {
                    cards[z].setInfo(clubs, "6");
                    z++;
                }
                else if (y == 6)
                {
                    cards[z].setInfo(clubs, "7");
                    z++;
                }
                else if (y == 7)
                {
                    cards[z].setInfo(clubs, "8");
                    z++;
                }
                else if (y == 8)
                {
                    cards[z].setInfo(clubs, "9");
                    z++;
                }
                else if (y == 9)
                {
                    cards[z].setInfo(clubs, "10");
                    z++;
                }
                else if (y == 10)
                {
                    cards[z].setInfo(clubs, J);
                    z++;
                }
                else if (y == 11)
                {
                    cards[z].setInfo(clubs, Q);
                    z++;
                }
                else if (y == 12)
                {
                    cards[z].setInfo(clubs, K);
                    z++;
                }
            }
            else if (x == 1)
            {
                if (y == 0)
                {
                    cards[z].setInfo(diamonds, A);
                    z++;
                }
                else if (y == 1)
                {
                    cards[z].setInfo(diamonds, "2");
                    z++;
                }
                else if (y == 2)
                {
                    cards[z].setInfo(diamonds, "3");
                    z++;
                }
                else if (y == 3)
                {
                    cards[z].setInfo(diamonds, "4");
                    z++;
                }
                else if (y == 4)
                {
                    cards[z].setInfo(diamonds, "5");
                    z++;
                }
                else if (y == 5)
                {
                    cards[z].setInfo(diamonds, "6");
                    z++;
                }
                else if (y == 6)
                {
                    cards[z].setInfo(diamonds, "7");
                    z++;
                }
                else if (y == 7)
                {
                    cards[z].setInfo(diamonds, "8");
                    z++;
                }
                else if (y == 8)
                {
                    cards[z].setInfo(diamonds, "9");
                    z++;
                }
                else if (y == 9)
                {
                    cards[z].setInfo(diamonds, "10");
                    z++;
                }
                else if (y == 10)
                {
                    cards[z].setInfo(diamonds, J);
                    z++;
                }
                else if (y == 11)
                {
                    cards[z].setInfo(diamonds, Q);
                    z++;
                }
                else if (y == 12)
                {
                    cards[z].setInfo(diamonds, K);
                    z++;
                }
            }
            else if (x == 2)
            {
                if (y == 0)
                {
                    cards[z].setInfo(hearts, A);
                    z++;
                }
                else if (y == 1)
                {
                    cards[z].setInfo(hearts, "2");
                    z++;
                }
                else if (y == 2)
                {
                    cards[z].setInfo(hearts, "3");
                    z++;
                }
                else if (y == 3)
                {
                    cards[z].setInfo(hearts, "4");
                    z++;
                }
                else if (y == 4)
                {
                    cards[z].setInfo(hearts, "5");
                    z++;
                }
                else if (y == 5)
                {
                    cards[z].setInfo(hearts, "6");
                    z++;
                }
                else if (y == 6)
                {
                    cards[z].setInfo(hearts, "7");
                    z++;
                }
                else if (y == 7)
                {
                    cards[z].setInfo(hearts, "8");
                    z++;
                }
                else if (y == 8)
                {
                    cards[z].setInfo(hearts, "9");
                    z++;
                }
                else if (y == 9)
                {
                    cards[z].setInfo(hearts, "10");
                    z++;
                }
                else if (y == 10)
                {
                    cards[z].setInfo(hearts, J);
                    z++;
                }
                else if (y == 11)
                {
                    cards[z].setInfo(hearts, Q);
                    z++;
                }
                else if (y == 12)
                {
                    cards[z].setInfo(hearts, K);
                    z++;
                }
            }
            else if (x == 3)
            {
                if (y == 0)
                {
                    cards[z].setInfo(spades, A);
                    z++;
                }
                else if (y == 1)
                {
                    cards[z].setInfo(spades, "2");
                    z++;
                }
                else if (y == 2)
                {
                    cards[z].setInfo(spades, "3");
                    z++;
                }
                else if (y == 3)
                {
                    cards[z].setInfo(spades, "4");
                    z++;
                }
                else if (y == 4)
                {
                    cards[z].setInfo(spades, "5");
                    z++;
                }
                else if (y == 5)
                {
                    cards[z].setInfo(spades, "6");
                    z++;
                }
                else if (y == 6)
                {
                    cards[z].setInfo(spades, "7");
                    z++;
                }
                else if (y == 7)
                {
                    cards[z].setInfo(spades, "8");
                    z++;
                }
                else if (y == 8)
                {
                    cards[z].setInfo(spades, "9");
                    z++;
                }
                else if (y == 9)
                {
                    cards[z].setInfo(spades, "10");
                    z++;
                }
                else if (y == 10)
                {
                    cards[z].setInfo(spades, J);
                    z++;
                }
                else if (y == 11)
                {
                    cards[z].setInfo(spades, Q);
                    z++;
                }
                else if (y == 12)
                {
                    cards[z].setInfo(spades, K);
                    z++;
                }
            }
        }
    }
    cout << "DONE LOADING..." << endl;
    pause();
}

void shuffleDeck(cardType cards[])
{ // Perfect Shuffle Method
    clear();
    cout << "Starting Shuffle..." << endl;
    cardType copyCards[52];
    for (int x = 0; x < 52; x++)
    {
        copyCards[x].setInfo(cards[x].getSuit(), cards[x].getRank());
    }

    for (int x = 0; x < 26; x++)
    {
        cards[x].setInfo(copyCards[x].getSuit(), copyCards[x].getRank());
        cards[x + 1].setInfo(copyCards[x + 26].getSuit(), copyCards[x + 26].getRank());
    }
    cout << "Done shuffling." << endl;
    pause();
}

void printDeck(cardType cards[])
{ // Call to printCards Method
    clear();
    for (int x = 0; x < 52; x++)
    {
        cards[x].printCard();
    }
    pause();
}

int main()
{
    cardType cards[52];
    bool exit = false;
    char selection;
    do
    {
        clear();
        cout << "\tHouse of Cards Program\n\n 1 > Load Deck\n 2 > Perform Perfect Shuffle\n 3 > Print Deck\n 4 > Exit\n\n Input: ";
        cin >> selection;
        switch (selection)
        {
        case '1':
            initializeDeck(cards);
            break;
        case '2':
            shuffleDeck(cards);
            break;
        case '3':
            printDeck(cards);
            break;
        case '4':
            exit = true;
            break;
        default:
            cout << "Error: Invalid Input." << endl;
            pause();
            break;
        }
    } while (exit != true);
}