#include "iostream"
using namespace std;

struct student
{
    int age;
    string name;
    string last_name;
    int standard;

};

int main()
{
    student estudiante;

    cin>>estudiante.age;
    cin>>estudiante.name;
    cin>>estudiante.last_name;
    cin>>estudiante.standard;

    cout<<estudiante.age<<" ";
    cout<<estudiante.name<<" ";
    cout<<estudiante.last_name<<" ";
    cout<<estudiante.standard<<" ";

    return 0;
}
