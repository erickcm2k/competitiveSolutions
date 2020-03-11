#include "iostream"
using namespace std;
 
int main(int argc, char const *argv[]) {
 
  int n, m;
  int ventanas = 0, temporal1 = 0, temporal2 = 0;
  int cantidad = 0;
  cin >> n >> m;
 
 
 
  for(int i = 1; i <= n; ++i){
 
    for(int j = 1; j <= m*2; ++j){
 
      cin >> ventanas;
 
      if(j % 2 == 1){
 
        temporal1 = ventanas;
 
      } else {
 
        temporal2 = ventanas;
 
        if( temporal1 == 1 or temporal2 == 1){
          cantidad ++;
        }
        temporal1 = 0; temporal2 = 0;
      }
    }
  }
 
  cout << cantidad;
 
  return 0;
}
