
// Polymorphism:()
// Constructors Overloading:

#include<iostream>
#include<string>
using namespace std;



class Student{
public:
string name;

// default contructor:
Student(){
    // non-parameterized:
    cout<<"non-parameterized constr:"<<endl;

}

// parameterized:

Student( string name){
    name=name;
    cout<<"parameterized constructors:"<<endl;

}

};



int main(){

    Student s1;
    s1.name="kadir";
    cout<<"Name:"<<s1.name<<endl;
    // Student s1("Umar"); // parameterized
    //  Student s1; // non-parameterized
    // s1.name="Abdul kadir";
    // cout<<"name:"<<s1.name<<endl;

    return 0;
}

// There are different types of polymorphism:
// (i) Compile-time polymorphism:
// (ii) Run time polymorphism:







































