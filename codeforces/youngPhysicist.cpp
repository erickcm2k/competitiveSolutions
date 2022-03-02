#include "iostream"
 
using namespace std;
 
int main(int argc, char const *argv[]) {
 
  int n, x, y ,z, vector, sumx = 0, sumy = 0, sumz = 0;
 
  cin >> n;
//s
  if((n >= 0)and(n <= 100)){
      for(int i = 0; i < n; ++i){
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
      }
 
      if((sumx == 0)and(sumy == 0)and(sumz == 0)){
        cout << "YES";
      }else{
        cout << "NO";
      }
  }
  return 0;
}