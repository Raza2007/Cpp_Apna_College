/*
// Constructor:("Special methods call automatically at time of object creation used for Initilisation.")
Some Points:
(i)Same name as class
(ii) Constructor does not have a return type
(iii) Only called once (automatically), at object creations.
(iv) Memory allocations happens when constructors is called.

*/

// Constructor:
// Therea are three type of constructors:
// (i) Parameterized Constructors
// (ii) Non-Parameterized Constructors
// (iii) Copy Constructors

#include<iostream>
#include<string>
using namespace std;

class Employee{

    public:
//  Class name aur constructors name same rahna chaiye:
//   Non-Parameterized Constructors("Employee ko andar koi bhi parameter nahi pass kar rahe hai isiliye ise non-parameterized cons.kahte hai")
    Employee(){
        cout<<"Hi , I am constructors:"<<endl;
    }
    
    string Name;
    string Dept;
    string subject;
    double salary;

};
int main(){
    Employee e1; // Constructors;
    Employee e2;

    e1.Name="mr_Umar";
    e1.Dept="Engineering";
    e1.salary=23444;
cout<<"salary:"<<e1.salary<<endl;
    return 0;
}



// Non-Parameterized Constructors("Without argument:")
// ----------------------------------------------------------

#include<iostream>
using namespace std;
class Student{

    public:
              string name;
              string dapt;
            int Id;


            // Constructors:
    Student(){
        cout<<"Hi, I am a default constr"<<endl;
    }
};


int main(){
    Student s; // Automatically called constructors:
    s.name="Umar";
    s.Id=101;
    s.dapt="computer Application";
    cout<<"Id:"<<s.Id<<endl;
    return 0;

 
}

















