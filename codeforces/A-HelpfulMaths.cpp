#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
    
    int ones = 0, twos = 0, threes = 0;
    string sum, newSum;
    cin >> sum;

    for(int i = 0; i < sum.length(); ++i) {
        if (sum.at(i) == '1') {
            ones++;
        } else if (sum.at(i) == '2') {
            twos++;
        } else if (sum.at(i) == '3') {
            threes++;
        }
    }

    int nums = (ones + twos + threes);

    for(int i = 0; i < ones; ++i) {
        if(newSum.length() == 0) {
            newSum += "1";
        } else {
            newSum += "+1";
        }
    }

    for(int i = 0; i < twos; ++i) {
        if(newSum.length() == 0) {
            newSum += "2";
        } else {
            newSum += "+2";
        }
    }

    for(int i = 0; i < threes; ++i) {
        if(newSum.length() == 0) {
            newSum += "3";
        } else {
            newSum += "+3";
        }
    }

    cout << newSum;

    return 0;
}
