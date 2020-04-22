#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    string n1, n2, result;
    cin >> n1 >> n2;

    for(int i = 0; i < n1.length(); ++i) {
        if (n1.at(i) != n2.at(i)) {
            result += "1";
        } else {
            result += "0";
        }
    }
    cout << result;

    return 0;
}
