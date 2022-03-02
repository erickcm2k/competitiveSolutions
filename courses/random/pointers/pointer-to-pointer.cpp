#include <iostream>
using namespace std;

int main() {

    cout << "Original value" << endl;
    int num = 10;
    cout << num << endl;
    cout << endl;

    cout << "Pointer to value" << endl;
    int *ptr = &num;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << endl;

    cout << "Pointer to previous pointer" << endl;
    int **pptr = &ptr;
    cout << pptr << endl;
    cout << *pptr << endl;
    cout << **pptr << endl;
    cout << endl;

    return 0;
}