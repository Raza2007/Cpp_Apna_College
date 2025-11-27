
// Abstractins:(Hiding all unnecessary details & only showing only the importent parts:)
#include<iostream>
#include<string>
using namespace std;

class Shape{                            //automatically abstract class
    virtual void draw() = 0; //pure virtual functions

};

// Is class ke object nahi bna shakte hai kauki abstract class ka kaam hai ek blueprint de rahi.
//hai ki kon si class hamare base class mai rahengi aur kon nahi rahegi:

class Circle : public Shape {
    public:
    void draw(){
        cout<<"Drawing a circle"<<endl;
    }
   
};

// Agar hum chahe tau ab rectangle ya Triangle name ka class bna   shakte hai

 class Triangle : public Shape {
    public:
    void draw(){
        cout<<"Drawing a triangle"<<endl;
    }
 };


 class Square : public Shape {
    public:
    void draw(){
        cout<<"Drawing a Square"<<endl;
    }
 };
int main(){

    // Circle c1;
    // c1.draw();

//    Triangle t1;
//    t1.draw();
   Square s1;
   s1.draw();

   
    return 0;
}













































