/*
Get the number of elements in common given two
SORTED arrays
*/
#include "iostream"
#include "vector"
#include "algorithm"
#include "array"

using namespace std;

int main(int argc, char const *argv[]) {
    /*
    Using binary search reduces time complexity from O(n^2)  - using brute force solution - 
    to O(nlog(n))
    It gets better by using a hash table to store b elements
    cost of storing b into a hash table -> O(n)
    checking if number exists in a hash table -> O(1)
    */
    vector<int> a = {2, 3, 5, 8, 15, 23, 25};
    vector<int> b = {4, 5, 9, 15, 20, 21, 25};

    int numbersInCommon = 0;

    for(int i = 0; i < a.size(); ++i){
        if (binary_search(b.begin(), b.end(), a.at(i))){
            numbersInCommon++;
        } 
    }
    cout << numbersInCommon; // Expected output: 3

    return 0;
}

