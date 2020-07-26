#include "iostream"
#include <vector>
#include <math.h>
using namespace std;

struct Person {
  float x;
  float y;
  int colisions = 0;
};

float euclideanDistance(float x1, float x2, float y1, float y2) {

  const int ITS_ITSELF = 301;
  float distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  if(x1 == x2 and y1 == y2) {
    return ITS_ITSELF;
  }
  return distance;
  
}

int calculateColitions(vector<Person> people, Person *person) {

  int colitions = 0;
  for(Person currentPerson: people) {
    float distance = euclideanDistance(currentPerson.x, (*person).x, currentPerson.y, (*person).y);
    if(distance <= 300) {      
      colitions++;
    }
  }
  return colitions;
}

bool colitionsInArray(vector<Person> *people) {
  int colitions = 0;
  for(Person person: *people) {
    if(person.colisions > 0) {
      return true;
    }
  }
  return false;
}

int CalculateHappyPeople(vector<Person> people) {

  // Calculates the amount of colitions from one person to all the people.
  int totalColitions = 0;
  for(int i = 0; i < people.size(); i++) {
    int currentPersonColitions = calculateColitions(people, &people.at(i));
    people.at(i).colisions = currentPersonColitions;
  }

  while(colitionsInArray(&people)) {
    // Get the person with the more colitions
    //cout << "trying to delete..." << endl;
    int maxColitions = 0;
    int maxColitionsPersonIndex = -1;
    for(int i = 0; i < people.size(); i++) {
      if(people.at(i).colisions > maxColitions) {
        maxColitions = people.at(i).colisions;
        maxColitionsPersonIndex = i;
      }
    }


    if(maxColitionsPersonIndex != -1) {
      people.erase(people.begin() + (maxColitionsPersonIndex));
    }

      int totalColitions = 0;
  for(int i = 0; i < people.size(); i++) {
    int currentPersonColitions = calculateColitions(people, &people.at(i));
    people.at(i).colisions = currentPersonColitions;
  }
  }

  int happyPeople = people.size();
  return happyPeople;
}


int main() {

  int N;
  int M;
  int numberOfPersons;
  vector<Person> people;

  cin >> N >> M >> numberOfPersons;

   
  int x ,y;

  for(int i = 0; i < numberOfPersons; ++i) {
      cin >> x >> y;
      Person person;
      person.x = x;
      person.y = y;
      people.push_back(person);
  }

  //cout << "executing functions..." << endl;

  int happyPeople = CalculateHappyPeople(people);
  cout << happyPeople;
}