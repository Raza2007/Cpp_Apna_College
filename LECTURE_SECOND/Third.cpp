// Inheritance:("When property & member functions of base class are passed on to the derived class:")
// For use a Inheritance:(Code reuseability:)


#include<iostream>
#include<string>
using namespace std;

class person{
    public:

    string Name;
    string address;
    int age;
 
// constructors:
//    person( string n,string a,int ag){
//               Name=n;
//               address =a;
//               age=ag;


//    } 
// person(){

// }

};

class student:public person{
    public: 
    int age;
    void getInfo(){
        cout<<"Name:"<<Name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"age:"<<age<<endl;
    }


};

int main(){
    student s1;
    s1.Name="umar";
    s1.address="Gonda";
    s1.age=23;

cout<<"Name:"<<s1.Name<<endl;

    return 0;
}























