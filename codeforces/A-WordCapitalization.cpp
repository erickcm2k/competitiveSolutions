#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
    
    string str;
    cin >> str;

    if(!isupper(str.at(0)))
        str.at(0) = toupper(str.at(0));

    cout << str;    

    return 0;
}
