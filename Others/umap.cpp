#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
int main() { 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<string, float> myMap; 
  
    // inserting values by using [] operator 
    myMap["GeeksforGeeks"] = 1010; 
    myMap["Practice"] = 2020; 
    myMap["Contribute"] = 3030; 

    myMap.insert(make_pair("e", 2.718)); 
    myMap.insert(make_pair("e", 2.70)); 
    
    // if (myMap.find("e") == myMap.end()) {
    //     cout << "Key not found" << endl;
    // } else {
    //     cout << "Key found" << endl;
    // }

    // cout << myMap.at("e");
    // cout << myMap.bucket_count();
    // Traversing an unordered map 
    // for (auto map: myMap) 
    //   cout << map.first << " " << map.second << endl; 

    int numbers[] = {1,2,3,4,5,6,7,8,9};
    for(auto number: numbers){
        cout << number << endl;
    }
  
}