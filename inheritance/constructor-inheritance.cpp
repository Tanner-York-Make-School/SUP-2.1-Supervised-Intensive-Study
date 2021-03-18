#include <iostream>
using namespace std;

// Constructors are not inherited but at least one super class is called when creating a subclass

class Machine {
    private:
        int id;

    public: // All parent classes are called when subclasses are created
        Machine(): id(0) { cout << "Machine non-argument constructor called." << endl; }
        // However, the constructors may be called but are not usable my default (line 32)
        Machine(int id): id(id) { cout << "Machine parameterized constructor called." << endl; }
        void info() { cout << "ID: " << id << endl; }
};

class Vehical: public Machine {
    /* Because Machines constructor is called we don't need to initialize Machines private data 
        in vehicals constructor */
    public:
        // To use the parameterized constructor we need to call it
        Vehical(int id): Machine(id) { cout << "Vehical non-argument constructor called." << endl; }
};

class Car: public Vehical {
    public:
        // Though, we don't need to call a parameterized constructor from another parameterized constructor
        Car(): Vehical(999) { cout << "Car non-argument constructor called." << endl; }
        // Also, Car can't use Machine's constructors
};

int main() {

    // Vehical can't use Machine's parameterized constructor by default (line 20)
    Vehical vehical(123);
    vehical.info();

    Car car;
    car.info(); // Car calls Machines constructor but doesn't inherit it

    return 0;
}