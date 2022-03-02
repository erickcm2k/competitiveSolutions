#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main(){

    int tam,numeros;
    int linf,lsup,pos;
    vector<int> lista;

    //tamaño del vector
    cin>>tam;
    //ingresar elementos al vector
    for(int i=0;i<tam;i++){
        cin>>numeros;
        lista.push_back(numeros);
    }

    //posicion a eliminar
    cin>>pos;
    //límites inferior y superior
    cin>>linf>>lsup;

    //posición específica a eliminar
    lista.erase(lista.begin()+pos-1);

    //rango en el que se eliminarán los números
    lista.erase(lista.begin()+linf-1,lista.begin()+lsup-1);

    //tamaño del vector
    cout<<lista.size()<<endl;
    for(int i=0;i<lista.size();i++){
        cout<<lista[i]<<" ";
    }

    return 0;
}
