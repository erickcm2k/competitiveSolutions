#include "iostream"
using namespace std;

void increment(int *a,int *b);
int main(){

    int a,b;
    cin>>a>>b;

    increment(&a,&b);

    cout<<a<<endl<<b<<endl;;

    return 0;
}

void increment(int *a,int *b){
    int temp1=*a;
    int temp2=*b;

    *a=temp1+temp2;
    if(temp1-temp2<0){
        *b=(temp1-temp2)*-1;
    }else{
        *b=temp1-temp2;
    }
}
