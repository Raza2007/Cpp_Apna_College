/*
Classifications of Inheritance:
-------:--------:-------------------:
(i) Single Inheritance:
(ii) Multiple Inheritance:
(iii)Multi-level Inheritance:
(iv)Hybrid Inheritance:
(v)Heraarchical Inheritance:
*/


//Multi-level Inheritance:
/*
#include<iostream>
#include<string>
using namespace std;

class Person{

    public:
    string name;
    string address;
    int age;

};

class student : public Person{
    public:
    int roll_no;
};

class GradStudent : public student {
    public:
    string reserchArea;
};

int main(){
    GradStudent s1;
    s1.name="kadir";
    s1.age=112;
    s1.roll_no =33;
    s1.reserchArea="quantum physics";
    cout<<"name:"<<s1.name<<endl;

    return 0;
}
*/


// Multiple Inheritance:(Ye tab hota hai jab ek child class do parent class koi inherit karta hai )
#include<iostream>
#include<string>
using namespace std;

class Person{

    public:
    string Name;
  int roll_no;

};

class Teacher{
    public:
    string Subject;
    double salary;
};
class TA : public Person,public Teacher{



};

int main(){

    TA t1;
    t1.Name="Ahmad";
    t1.Subject="C++";
    cout<<"Name:"<<t1.Name<<endl;
    cout<<"Subject:"<<t1.Subject<<endl;

    return 0;
}
































