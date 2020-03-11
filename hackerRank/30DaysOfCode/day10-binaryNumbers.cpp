#include "iostream"
#include "string"
using namespace std;

int main()
{
    int n;
    cin>>n;
    string pal,palabra[n];

    for(int i=0;i<n;i++){
        cin>>palabra[i];
    }
    for(int i=0;i<n;i++){
        pal=palabra[i];

        for(int i=0;i<pal.size();i++){
            if(i%2==0){
                cout<<pal[i];
            }
        }

        cout<<" ";

        for(int i=0;i<pal.size();i++){
            if(i%2==1){
                cout<<pal[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
