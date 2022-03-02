#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n=2;
    int i=1;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do{
        cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
        i++;
    }while(i<=10);
    return 0;
}
