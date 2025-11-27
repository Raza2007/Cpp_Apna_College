
// Parameterized Constructors("With argument:")
// ----------------------------------------------------------
#include<iostream>
#include<string>

using namespace std;
class student {
    public:
    int age;
    string name;


    // Default Constructor:

    student(){
        age =0;
        name="unknown";
    }
// parameterized constructors:

   student(int a,string n){
        age=a;
        name=n;
    
    }
  
};

int main(){
    student s;

    s.name="umar";
    s.age=55;
    cout<<"age:"<<s.age<<endl;
     cout<<"name:"<<s.name<<endl;
    return 0;

}

































/*
Constructor:( this is a special pointer in C++ that points to be the current object.)
this --> prop is same as *(this).prop
*/




























