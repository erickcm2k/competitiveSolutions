#include "iostream"
using namespace std;
 
int main(int argc, char const *argv[]) {
 
 
  int tam, SS = 0, SF = 0, FF = 0, FS = 0;
  cin >> tam;
  char viajes[tam];
 
  for(int i = 0; i < tam; ++i){
 
    cin >> viajes[i];
 
  }
 
  for(int i = 0; i < tam; ++i){
 
    if(viajes[i] == 'S' and viajes[i+1] == 'S'){
 
      SS++;
 
    } else if(viajes[i] == 'S' and viajes[i+1] == 'F'){
 
      SF++;
 
    } else if(viajes[i] == 'F' and viajes[i+1] == 'F'){
 
      FF++;
 
    } else if(viajes[i] == 'F' and viajes[i+1] == 'S'){
 
      FS++;
 
    }
 
  }
 
/*  cout << "SS = " << SS << endl;
  cout << "SF = " << SF << endl;
  cout << "FF = " << FF << endl;
  cout << "FS = " << FS << endl;*/
 
 
  if(SF > FS){
    cout << "YES";
  } else{
    cout << "NO";
  }
 
 
 
 
  return 0;
}
