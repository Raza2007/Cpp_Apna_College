/*
 Introducations to OOps Apna_College:
 --------------------------------------
 (i) Classes & Object:
 a.Object are entities in the real world
 b. classes is like a blueprint of the entities.("Group of object:")
*/

// (i) Syntax of Class:(Class ko declare kerne ke liye sabse pahle class keyword aur class ka name  )

#include <iostream>
#include <string>
using namespace std;
// Create a class:
// oops ke andar only class aur object declare karna kafi nahi hota
// access specifier ya modifiers ki bhi jaroorat hoti hai:
// Access specifier:
// (i) private("data & methods accessible inside class")
// (ii)public("data & methods accessible to everyone")
// (iii)protected.("data & methods accessible inside class & to its derived class")
class Teacher
{
    // properties
    // private:
    // double salary;
    public:
    string name;
    string dept;
    string subject;
    double salary;
   

    // methode // Member Functions
    // void changeDept(string newDept)
    // {
    //     dept = newDept;
    // }
    // setter:("Private value koo set karna ")
    // void setSalary(double s){
    //     salary =s;

    // }
    //getter:("private value ke value ke get karne ke liye kiya jata hai:")
    // double getSalary(){
    //     return salary;
    // }
   
};

int main()
{
    Teacher t1;
    t1.name = "umar";
    t1.subject = "C++";
    t1.dept = "Computer science";
    // t1.setSalary(25000);
    t1.salary=230000;


     cout << t1.name << endl;
    //  cout<<t1.getSalary()<<endl;
     
    return 0;
}