#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
    void set_age(int a){
        age = a;
    }

    int get_age(){
        return age; 
    }

    void set_first_name(string b){
      first_name = b;  
    }

    string get_first_name(){
        return first_name;
    }

    void set_last_name(string c){
        last_name = c;
    }
    
    string get_last_name(){
        return last_name;
    }
             
    void set_standard(int d){
        standard=d;
    }

    int get_standard(){
        return standard;
    }

    string to_string()
    { 
         string str;
         stringstream ss;
         ss<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
         str=ss.str();
         return str;
    }
};

int main(){
    int age,standard;
    string first_name,last_name;
    
    cin>>age>>first_name>>last_name>>standard;
    
    Student estudiante;
    estudiante.set_age(age);
    estudiante.set_first_name(first_name);
    estudiante.set_last_name(last_name);
    estudiante.set_standard(standard);
 

    cout<<estudiante.get_age()<<"\n";
    cout<<estudiante.get_last_name()<<", "<<estudiante.get_first_name()<<"\n";
    cout<<estudiante.get_standard()<<"\n";
    cout<<"\n";
    cout<<estudiante.to_string();
    
    return 0;
}
