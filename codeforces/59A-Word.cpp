#include "iostream"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int upps = 0, lows = 0;

    for(int i = 0; i < str.length(); ++i) {
        if(isupper(str.at(i))) {
            upps++;
        } else {
            lows++;
        }
    }

    if(upps > lows) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    } else if(upps == lows) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str;

    return 0;
}
