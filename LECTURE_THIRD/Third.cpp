
// Run time Polymorphism:
// Iska example:
// (i) Fucntions Overriding:("Parent & child both contain the same function with different implementations:")
// ["Same name and same parameter but different implementations:"]

#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:

    void getInfo() {
        cout<<"parent class\n";
    }

};

class child : public Parent {
   void  getInfo(){
        cout<<"child  class\n";
    }


};
int main(){

    Parent p1;
    p1.getInfo();

    return 0;
}



// Second Example of Virtual Functions[A virtual functions is a member functions that you expect to be redefined in derived clsses:]:



#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:

    void getInfo() {
        cout<<"parent class\n";
    }

    virtual void hello(){
        cout<<"hello from per"<<endl;
    }
};

class Child : public Parent {
    public:
   void  getInfo(){
        cout<<"child  class\n";
    }

  void hello(){
    cout<<"hello from child\n"<<endl;
}

};
int main(){

    Parent p1;
    p1.getInfo();

    // Child c1;

// c1.hello();
// c1.getInfo();


    return 0;
}

/*

Key_Point_of_Virtual_functions:
----------------------------------------------
(i) Virtual functions are Dynamic in nature.
(ii) Definedby the keyword "virtual" insaide a base class and are always declared with class and overridden in a child class.
(iii) A virtual functions is called during runtime.
*/



































