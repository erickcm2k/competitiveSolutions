#include "iostream"
using namespace std;

string convertirPalabras(string cadena) {
    string palabra = cadena;
    for(int i = 0; i < palabra.length(); i++) {
        switch(palabra[i]) {
            case 'o':
            palabra[i] = '0';
            break;

            case 'O':
            palabra[i] = '0';
            break;

            case 'i':
            palabra[i] = '1';
            break;

            case 'I':
            palabra[i] = '1';
            break;       

            case 'z':
            palabra[i] = '2';
            break;

            case 'Z':
            palabra[i] = '2';
            break;

            case 'e':
            palabra[i] = '3';
            break;

            case 'E':
            palabra[i] = '3';
            break;     

            case 'a':
            palabra[i] = '4';
            break;

            case 'A':
            palabra[i] = '4';
            break;

            case 's':
            palabra[i] = '5';
            break;

            case 'S':
            palabra[i] = '5';
            break;     

            case 'g':
            palabra[i] = '6';
            break;

            case 'G':
            palabra[i] = '6';
            break;

            case 't':
            palabra[i] = '7';
            break;

            case 'T':
            palabra[i] = '7';
            break;     

            case 'b':
            palabra[i] = '8';
            break;

            case 'B':
            palabra[i] = '8';
            break;                                     
        }
    }
    return palabra;
}

int main(int argc, char const *argv[])
{
    
    string cadena;
    cin >> cadena;
    string palabra =  convertirPalabras(cadena);
    cout << palabra;
    
    return 0;
}


