/* 

SHALLOW_AND_DEEP_CONSTRUCTORS:(I(Shallow constr.):["Shallow copy mai object ka sirf address(pointer) copy hota hai"]
                                                    ["('Agar ek object ka data badalte ho tau doosre object ka data bhi badal jata hai:)"]


*/

// Shallow copy:
#include<iostream>
#include<string>
using namespace std;
class Note {
public:
    string *page;

    Note(string text) {
        page = new string(text);
    }

    // Shallow Copy: same page (memory) share
    Note(const Note &obj) {
        page = obj.page;
    }
};

int main() {
    Note n1("Hello");
    Note n2 = n1;  // Shallow copy

    *n2.page = "Changed Text";  // n2 me change

    cout << *n1.page;   // Output: Changed Text (n1 bhi change)
}




// Deep copy me hum new memory allocate karte hai aur
// purane object ke data ki copy nayi jagah banate hai

// 👉 Result

// Ek object me change karne se dusre par koi effect nahi hota hai:

#include<iostream>
#include<string>
using namespace std;

// class Note {
// public:
//     string *page;

//     Note(string text) {
//         page = new string(text);
//     }

//     // Deep Copy: new page + copy text
//     Note(const Note &obj) {
//         page = new string(*obj.page);
//     }
// };

// int main() {
//     Note n1("Hello");
//     Note n2 = n1;   // Deep copy

//     *n2.page = "Changed Text";  // n2 me change

//     cout << *n1.page;   // Output: Hello (n1 change nahi hua)
// }













































