#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
    
    int n;
    cin >> n;
    string words[n];

    for(int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    for(int i = 0; i < n; ++i) {
        if(words[i].length() > 10) {
            cout << words[i].at(0) << words[i].length() - 2 << words[i].at(words[i].length() - 1) << endl;
        } else {
            cout << words[i] << endl;
        }
    }




    return 0;
}
