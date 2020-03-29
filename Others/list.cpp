#include "iostream"
#include "list"
#include "vector"
using namespace std;

int main(int argc, char const *argv[]) {

    list<int> myList;
    vector<int> myVector;
    myVector.push_back(10);
    myList.push_back(10);
    myList.push_back(130);
    myList.push_back(131);
    myList.push_back(-10);
    myList.push_back(120);
    myList.push_back(1330);
    myList.push_front(1000);

    myList.pop_back();
    myList.pop_front();

    myList.sort();

    bool x = binary_search(myList.begin(), myList.end(), 1000);

    cout << x << endl;
    for(int number: myList)
        cout << number << " ";

    return 0;
}
