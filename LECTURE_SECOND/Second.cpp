/*
Destructor:("OOPs mai Destructor ek importent function hota hai jo object ke destory hone se pahle apne app call ho jata hai")
------------
(i) Iska kaam Memoory ko free karna 
(ii) Resourses ko close karna
(iii) Destructor ka name class ke name ke jaise hota hai
(iv) isme parameter nahi hote hai
(v) isko overload nahi kiya ja shakta hai 
(vi) Destractors apne aap call hota hai manually nahi 
(vii) iske aage tilde lagana hota hai(~)
*/

// Basic synatx of Destructors:
// ---------------------------------
// class classname{
//     public:
//     ~classname(){
//                   // destructors code:
//     }
// };

#include<iostream>
#include<string>
using namespace std;

class student{
    public:

    // constructors:
    student(){
        cout<<"Constructors called, object is created"<<endl;
    }

    
~student(){
     cout<<"Destructors called, object is Destroyed"<<endl;

}
// ~student(){
//     cout<<"Hi,I delete everything:"<<endl;
   
// }

};


int main(){
cout<<"Block start:"<<endl;
{
    student obj;

}

cout<<"Block End:"<<endl;
    return 0;
}


































