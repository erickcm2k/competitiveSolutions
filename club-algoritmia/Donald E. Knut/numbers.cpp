#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
using namespace std;

string sortString(string numericString) {
    vector<int> intNum;
    for(char letter: numericString) {
      intNum.push_back((int)letter);
    }

    sort(intNum.begin(), intNum.end(), greater <>());

    string newStringNum = "";
    for(int digit: intNum) {
      newStringNum += char(digit);
    }

  return newStringNum;
}

vector<string> sortDescNumbers(vector<int> nums) {
  vector<string> bigNumber;
  for(int num: nums) {
    string newString = sortString(to_string(num));
    bigNumber.push_back(newString);
   
  }


  sort(bigNumber.begin(), bigNumber.end(), greater<>());


  return bigNumber;
}

int main(){

  int n;
  cin >> n;
  vector<int> numbers;
  int num;

  for(int i = 0; i < n; i++) {
    cin>> num;
    numbers.push_back(num);
  }

  vector<string> newNums = sortDescNumbers(numbers);
  for(string num: newNums) {
    cout << num;
  }

  return 0;
}


