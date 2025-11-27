/*
Copy constructors:
-------------------------
("Special constructor(default) used to copy property of one object into another:")
 iska kaam hota hai object ko copy karna
ek object ko uthata hai aur doosri object ki copy bna deta hai:

Syntax of copy construc.
-------------------------------
classname(const classname &oldobject):
*/

#include<iostream>
#include<string>
using namespace std;

class student{


    public:
    string name;
    int Id;
    string subject;

// default constructor:
// student(){
//     Id=0;
//     name=" ";
//     subject ="";

// }

// parameterized constructors:
    student(int i,string n,string s){
        Id =i;
        name =n;
        subject =s;

    }


    // copy constructors:

student( const student & obj){
    Id =obj.Id;
    name=obj.name;
    subject=obj.subject;

}

};

int main(){

    // aur yadi app deafault constr. banate hai tau aap jo upper mai banaye  hai object usi tarah banega:
    
//     student s1;
//     s1.Id=123;
//     s1.name="kadir";
//     s1.subject="CS";
// cout<<"Id:"<<s1.Id<<endl;


    // Agar aap deafalut constr. nahi bnana chahte hai tau aap objetc ko aise banana padega 
    student s1(123,"Kadir","CS");
 cout<<"Id:"<<s1.Id<<endl;
 cout<<"Name:"<<s1.name<<endl;
 cout<<"Subject:"<<s1.subject<<endl;


    return 0;
}




































