#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
    int fours = 0;
    int threes = 0;
    int twos = 0;
    int ones = 0;
    int taxis = 0;
    int n;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        cout << i;
    }

    for (int i = 0; i < n; i++)
    {
        switch (numbers[i])
        {
        case 4:
            fours++;
            break;
        case 3:
            threes++;
            break;
        case 2:
            twos++;
            break;
        case 1:
            ones++;
            break;
        default:
            break;
        }
    }

    taxis += fours;

    while (threes > 0 or twos > 0 or ones > 0)
    {
        if (threes > 0 and ones > 0)
        {
            taxis++;
            threes--;
            ones--;
        }
        if (threes > 0 and ones == 0)
        {
            taxis += threes;
            threes = 0;
        }
        if (twos > 1)
        {
            taxis++;
            twos -= 2;
        }
        if (twos > 0 and ones > 1)
        {
            taxis++;
            ones -= 2;
            twos--;
        }
    }

    cout << taxis;

    return 0;
}
