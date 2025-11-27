
// Hierarchial Inheritance:("EK parent class se multiple child inherit kar rahi hoti hai:")

#include <iostream>
#include<string>
using namespace std;
// Parent class

class Vehicle {
public:
     void start() {
        cout << "Vehicle Start ho gaya!" << endl;
    }
};

// Child class 1
class Car : public Vehicle {
public:
    void carType() {
        cout << "Yeh ek Car hai." << endl;
    }
};

// Child class 2
class Bike : public Vehicle {
public:
    void bikeType() {
        cout << "Yeh ek Bike hai." << endl;
    }
};

// Child class 3
class Bus : public Vehicle {
public:
    void busType() {
        cout << "Yeh ek Bus hai." << endl;
    }
};

int main() {

    Car c;
    Bike b;
    Bus bs;

    c.start();
    c.carType();

    b.start();
    b.bikeType();

    bs.start();
    bs.busType();

    return 0;
}



















































