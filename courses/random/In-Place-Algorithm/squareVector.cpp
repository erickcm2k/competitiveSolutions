#include <iostream>
#include <vector>
using namespace std;

// Best memory and time usage.
void squareVectorInPlace(vector<int>& nums) {
  for(int i = 0; i < nums.size(); i++) {
     nums.at(i) *= nums.at(i);
  }
}

// Use in case you don't want to alter the input.
vector<int> squareVectorOutOfPlace(const vector<int>& nums) {
  vector<int> squaredVector(nums.size());

  for(int i = 0; i < nums.size(); i++) {
     squaredVector.at(i) = nums[i] * nums[i];
  }
  return squaredVector;
}

int main() {
  vector<int> numbers;
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_back(4);
  numbers.push_back(5);
  numbers.push_back(6);

  cout << "Before square" << endl;
  for(int number: numbers) {
    cout << number << " ";
  }

    // Original input altered.
  squareVectorInPlace(numbers);

  cout << "After square" << endl;
  for(int number: numbers) {
    cout << number << " ";
  }

}