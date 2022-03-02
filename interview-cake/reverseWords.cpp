#include <iostream>
#include <vector>
using namespace std;

void reverseString(string &str) { 
    for(int i = 0, j = str.length() - 1; i < str.length() / 2; i++, j--) {
      char temp = str.at(i);
      str.at(i) = str.at(j);
      str.at(j) = temp;
    }
}

vector<string> splitSentence(const string &msg) {
  vector<string> words;
  string temp;
  for(int i = 0; i < msg.length(); i++) {
    if(msg.at(i) != ' ') {
      temp += msg.at(i);
    } else {
      words.push_back(temp);
      temp = "";
    }

    if(i == msg.length() - 1) {
      words.push_back(temp);
    }
  }  
  return words;
}

void reverseWords(string &msg) {
  reverseString(msg);

  vector<string> words = splitSentence(msg);

  msg = "";

  for(int i = 0; i < words.size(); i++) {
    reverseString(words.at(i));
    //cout << words.at(i) << endl;
    msg += words.at(i) + " ";
  }
}


int main() {
  string message = "friends world hello";
  cout << message << endl;
  reverseWords(message);
  cout << message << endl;
}