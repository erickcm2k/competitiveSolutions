#include <iostream>
using namespace std;

int main() {
    int nums[3][3] = {
      {16, 18, 20},
      {25, 26, 27}, 
      {10, 20, 30} 
    };

    // Access to de diagonal
    cout << *(*(nums)) << endl;
    cout << *(*(nums + 1) + 1) << endl;
    cout << *(*(nums + 2) + 2) << endl;


    cout << nums[0][0] << endl;
    cout << nums[1][1] << endl;
    cout << nums[2][2] << endl;

    return 0;
}