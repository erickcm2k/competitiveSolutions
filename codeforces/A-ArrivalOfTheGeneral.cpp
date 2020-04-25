#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
    int n, max, min, maxPos, minPos;
    cin >> n;
    int numbers[n];

    for(int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    max = numbers[0];
    min = numbers[n - 1];

    for(int i = 1; i < n; ++i) {

        if(max < numbers[i]) {
            max = numbers[i];
            maxPos = i;
            cout << "maxPos: " << maxPos;
        }

        if(min > numbers[n - i]) {
            min = numbers[n - i];
            minPos = n - i;
            cout << "minPos: " << minPos;
        }
    }
    cout << "\n\n";
    cout << "Max = " << max << " Pos = " << maxPos << endl;
    cout << "Min = " << min << " Pos = " << minPos << endl;

    int movs;

    if(maxPos + minPos + 1 > n) { // if(n)
        cout << "Yes" << endl;
        movs = maxPos + (n - minPos) - 2;
    } else {
        cout << "No" << endl;
        movs = abs(maxPos - minPos) + abs(minPos - maxPos);
    }

    cout << "Movements = " << movs << endl;
    return 0;
}
