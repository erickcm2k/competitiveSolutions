#include <iostream>
using namespace std;

int main() {

  int numbers[] = {10, 20, 30, 40, 50, 60};
  int *ptr = numbers;

  // Accesing to elements of the array
  cout << "First element: " << ptr[0] << endl;
  cout << "Second element: " << ptr[1] << endl;

  for(int i = 0; i < 6; i++) {
    cout << "Value: " << *ptr << ", Address -> " << ptr << endl;
    ptr++;
  }
  return 0;
}