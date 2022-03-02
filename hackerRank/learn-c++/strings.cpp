#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    string s1,s2;
    string s1p,s2p;

    cin>>s1>>s2;


    s1p=s2[0];
    for(int i=1;i<s1.size();i++){
        s1p=s1p+s1[i];
    }

    s2p=s1[0];
    for(int i=1;i<s2.size();i++){
        s2p=s2p+s2[i];
    }


    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1+s2<<endl;
    cout<<s1p<<" "<<s2p<<endl;

    return 0;
}
