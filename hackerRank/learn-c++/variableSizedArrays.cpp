#include "iostream"
#include "vector"
using namespace std;

int main()
{
    int n,q;
    int k;    
    int numero;
    cin>>n>>q;
    vector <vector<int> > a(n);

    // input each array
    for (int i=0;i<n;i++) {

        cin>>k;

        for (int j=0;j<k;j++) {
            cin>>numero;
            a[i].push_back(numero);
        }
    }

    // do the queries
    for (int i=0;i<q;i++) {
        int x,y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;        
    }    
        
    return 0;
}
