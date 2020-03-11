#include "iostream"
#include "utility"
#include "math.h"
using namespace std;

int main(int argc, char const *argv[]) {

  int elemento, movimientos;

  for(int i = 1; i <= 5; ++i){
    for(int j = 1; j <= 5; ++j){
      cin >> elemento;
      if(elemento == 1){
        movimientos = (abs(i - 3) + abs(3 - j));
      }
    }
  }

  cout << movimientos;

  return 0;
}