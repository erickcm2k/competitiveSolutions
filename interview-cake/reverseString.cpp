#include <iostream>
using namespace std;

void reverseString(string &str) { 

  if(str.empty()) {
    return;
  }

    for(int i = 0, j = str.length() - 1; i < str.length() / 2; i++, j--) {
      char temp = str.at(i);
      str.at(i) = str.at(j);
      str.at(j) = temp;
    }
}

void reverseStringFromTo(string &str, int leftIndex, int rightIndex) {

  if(str.empty()) {
    return;
  }

  while(leftIndex < rightIndex) {
    swap(str.at(leftIndex), str.at(rightIndex));
    leftIndex++;
    rightIndex--;
  }
}


int main() {
  string str = "Hello World";
  cout << str << endl;
  reverseString(str);
  reverseStringFromTo(str, 0, str.length() - 1);
  cout << str << endl;
}