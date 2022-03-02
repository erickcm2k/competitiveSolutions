#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int drinks;
    double orangeJuiceAcum = 0;
    cin >> drinks;

    double orangeJuiceVolume[drinks];
    
    for(int i = 0 ; i < drinks; ++i) {
        cin >> orangeJuiceVolume[i];
        orangeJuiceAcum += orangeJuiceVolume[i];
    }

    double totalJuiceFraction = orangeJuiceAcum / drinks;
    cout.precision(12);
    cout << fixed << totalJuiceFraction << endl;

    return 0;
}
