
/*

Main pillers in C++
--------------------
(i)Encapsulations:("Encapsulations is wrapping up of data & member functions in a single unit calles class:")
("Importent info ko hide karna aur baki info dikhna:")
(ii)Abstractions
(iii)Inheritance 
(iv) Polymorphism
*/
// Encapsulations

#include<iostream>
#include<string>
using namespace std;

class Account{
    private:
double balance;
string password;

    public:
string accountId;
string username;
int age;

};
int main(){

    Account a1;
    a1.accountId="OneLakh";
    a1.username="umar@512";
    //  a1.password="Khan@2007";
    // a1.balance =2000000;
    cout<<a1.username<<endl;
    return 0;
}

















