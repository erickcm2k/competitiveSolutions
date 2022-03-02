#include "iostream"
using namespace std;

int main(){

    int n;
    cin>>n;
    int numeros[n];

    for(int i=0;i<n;i++){
        cin>>numeros[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    return 0;
}
