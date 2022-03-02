#include "iostream"
#include "vector"
#include "stack"
using namespace std;

int main(int argc, char const *argv[])
{
    int numberOfStones, minimumMovements = 0;
    string stones;

    cin >> numberOfStones;
    cin >> stones;

    for(int i = 0; i < stones.length() - 1; ++i) {
        if(stones.at(i) == stones.at(i + 1)) {
            minimumMovements++;
        }
    }

    cout << minimumMovements;

    return 0;
}
