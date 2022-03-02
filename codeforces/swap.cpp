#include "iostream"
#include "vector"
using namespace std;

void change(vector<int> * v, int i1, int i2){
    int a = v -> at(i1);
    int b = v -> at(i2);
    v -> at(i1) = b;
    v -> at(i2) = a;
}

int main(int argc, char const *argv[]) {
    
    vector<int> v{7, 7, 4, 8, 6, 5, 6, 1, 2}; // -std=c++11
    int movs = 0;

    for(int i = 3; i > 0; --i) {
        change(&v, i, i - 1);
        movs++;
    }

    for(int i = 7; i < v.size() - 1; ++i) {
        change(&v, i, i + 1);
        movs++;
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << " ";
    }
    cout << "\nMovs = " << movs << endl;

    return 0;
}
