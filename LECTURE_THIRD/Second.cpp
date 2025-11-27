// Compile-time polymorphism:(Isme compile time pr hi pta chal jata hai ki output kya aane wala hai: )

// (i) Constructors Overloading iska ek example hai:
// (ii) Functions Oveloadings iska second example hai:

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
string name;

Student(){
    cout<<"non-parameterized constr:"<<endl;

}

Student( string name){
    name=name;
    cout<<"parameterized constr."<<endl;

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



/*
________________________________________________________

 (ii) Functions Oveloadings iska second example hai:     ("Single class ke andar  do functions define kara do aur dono functions ke name same ho lekin parameter different ho  ")
 _____________________________________________________    ("Same functions name but different parameter is a called Functions Overloading: )
(iii) Operator Overloading:( Same operators ko multile tarike se use kiya jata hai:)

// int y=123;
// intx=y;
// Or:
// string a="sss";
// string b=a
This is called operator overloading:


*/

#include<iostream>
#include<string>
using namespace std;

class Print{
    public:
    void show(int x){

        cout<<"int x:"<<x<<endl;
    }
    void show( char ch){
        cout<<"char:"<<ch<<endl;
    }

};


int main(){


Print p1;
p1.show('a');



    return 0;
}
































































