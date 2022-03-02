#include "iostream"
#include "vector"
using namespace std;

int main(int argc, char const *argv[]) {
    
    int n, t;
    string s;

    cin >> n >> t;
    cin >> s;

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < s.length() - 1; j++) {

            if(s.at(j) == 'B' and s.at(j + 1) == 'G') {
                s.at(j) = 'G';
                s.at(j + 1) = 'B';
                j++;
            }

        }
        //cout << "t = " << i + 1 << " -> "<< s << endl;
    }
    cout << s << endl;
    
    return 0;
}
