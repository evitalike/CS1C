#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW5 - STL Vectors
*/

using namespace std;

void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void clear()
{
    system("clear");
}

vector<int> Lotto(int spots, int winnersCount)
{
    vector<int> list;
    for (int x = 1; x < spots + 1; ++x)
    {
        list.push_back(x);
        cout << x << endl;
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle(list.begin(), list.end(), default_random_engine(seed));

    vector<int> winningSlots;
    for (int x = 0; x < winnersCount; x++)
    {
        winningSlots.push_back(list[x]);
    }
    return winningSlots;
}

int main()
{

    vector<int> winners;

    winners = Lotto(51, 6);

    cout << "WINNERS ARE: " << endl;

    for (int x = 0; x < 6; x++)
    {
        cout << winners[x] << endl;
    }

    pause();
    clear();

    return 0;
}
