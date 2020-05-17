#include "iostream"
using namespace std;

bool isGreaterThanAllPrevious(int num, int pos, int pastContests[]) {
    int goodOnes = 0;
    for(int i = pos - 1; i >= 0; --i) {
        //cout << num << " --- " << pastContests[i] << endl;
        if(num > pastContests[i]) {
            goodOnes++;
        } else {
            return false;
        }
    }

    if(goodOnes == pos) {
        //cout << num << " is awesome! - index["<< pos << "] - GREATER" << endl;
        return true;
    } else {
        return false;
    }
}

bool isLowerThanAllPrevious(int num, int pos, int pastContests[]) {
    int goodOnes = 0;
    for(int i = pos - 1; i >= 0; --i) {
        //cout << num << " --- " << pastContests[i] << endl;
        if(num < pastContests[i]) {
            goodOnes++; 
        } else {
            return false;
        }
    }

    if(goodOnes == pos) {
        //cout << num << " is awesome! - index["<< pos << "] - LOWER" << endl;
        return true;
    } else {
        return false;
    }
}

bool isAwesome(int num, int pos, int pastContests[]) {
   
    if(isGreaterThanAllPrevious(num, pos, pastContests) or isLowerThanAllPrevious(num, pos, pastContests)) {
        return true; 
    } else {
        return false;
    }
}

int main(int argc, char const *argv[]) {
    int contestNum, awesomeness = 0;
    cin >> contestNum;

    int contestScore[contestNum];
    for(int i = 0; i < contestNum; ++i) {
        cin >> contestScore[i];
    }

    for(int i = 1; i < contestNum; ++i) {
        if (isAwesome(contestScore[i], i, contestScore))
            awesomeness++;
    }

    cout << awesomeness;

    return 0;
}
