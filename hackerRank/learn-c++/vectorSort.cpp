#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
    int n,numeros;
    vector<int> lista;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>numeros;
        lista.push_back(numeros);
    }

    sort(lista.begin(),lista.end());

    for(int i=0;i<lista.size();i++){
        cout<<lista[i]<<" ";
    }

    return 0;
}
