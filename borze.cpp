#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
    
    string strIn;
    string borze;
    cin >> strIn;
    for(int i = 0; i < strIn.length(); ++i) {

        if(strIn.at(i) == '.') {
            borze += '0';
        } else if (strIn.at(i) == '-' and strIn.at(i + 1) == '.') {
            borze += '1'; i++;
        } else if (strIn.at(i) == '-' and strIn.at(i + 1) == '-') {
            borze += '2'; i++;
        }

    }

    cout << borze;

    return 0;
}
