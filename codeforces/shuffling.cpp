#include "iostream"
#include "string.h"
using namespace std;
 
int main()
{
	
	int n,t,x=1;
	cin>>n>>t;
	x=x<<n;
	int palabra[x];
 
	for(int i=0;i<x;i++){
		cin>>palabra[i];
	}
 
	if(t%2==0){
			for(int i=0;i<x;i++){
			cout<<palabra[i]<<" ";
		}
	}
	else{
		for(int i=x-1;i>=0;i--)
			cout<<palabra[i]<<" ";
	}
 
	return 0;
}
