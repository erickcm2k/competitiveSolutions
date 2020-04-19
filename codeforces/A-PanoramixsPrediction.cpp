#include "iostream"
#include "vector"
using namespace std;

int getPrimeIndex(int n, vector<int> * primes ) {
    for(int i = 0; i < primes -> size(); ++i) {
        if(n == primes -> at(i)) {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[]) {

    vector<int> primes{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53 }; // C++ 11 
    bool isPrime = false;
    int n, m;

    cin >> n >> m;

    int nPos = getPrimeIndex(n, &primes);
    
    bool isNextPrime = (m == primes.at(nPos + 1));

    if(isNextPrime)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}
