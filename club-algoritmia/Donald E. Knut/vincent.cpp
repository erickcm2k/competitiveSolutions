#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {

    int v, a, r, p, h;

    cin >> v;
    cin >> a;
    cin >> r;
    cin >> p; 
    cin >> h;

    if(v + a + r >= h) {
        cout << "WAW";
    } else if( v + a + p >= h) {
        cout << "WAW";
    } else if(r + p + a >= h) {
        cout << "WAW";
    } else if(r + p + v >= h) {
        cout << "WAW";
    } else if(p + r + a >= h) {
        cout << "WAW";
    } else {
        cout << "AWW";
    }
    
    return 0;
}
