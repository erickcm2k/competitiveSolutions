#include <iostream>
using namespace std;

int max_of_four(int a,int b,int c,int d);
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a,b,c,d);
    return 0;
}

int max_of_four(int a,int b,int c,int d){
    if((a>b)and(a>c)and(a>d)){
        return a;
    }
    else if((b>c)and(b>d)){
        return b;
    }
    else if(c>d){
        return c;
    }    
    else{
        return d;
    }
}
