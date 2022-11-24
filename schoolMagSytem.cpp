#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    cout<<"Inputs the child name here\n";
    cin>>name;
    cout<<"Inputs the child age\n";
    cin>>age;
    if(age < 4){
       cout<<name + " is too young be be admitted to school\n";
    }
    else if(age >=4 && age <=6){
       cout<<"Admit " + name + " to pre-school\n";
    }
    else if(age >=7 && age <=15){
       cout<<"Admit " + name + " to primary school\n";
    }
    else if(age > 15){
       cout<<"Not eligible to this school\n";
    }
    

    return 0;
}
