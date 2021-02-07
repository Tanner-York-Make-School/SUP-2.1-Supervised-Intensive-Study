#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        Animal() { cout << "Animal created." << endl; } // Runs when an object of this class is created
        // The copy constructure as differect synaxes but it must have the const squence in the parentheses
        Animal(const Animal& other) { name = other.name; cout << "Animal created by copy." << endl; }; // copy constructure
        // Animal(const Animal& other) name(other.name) { cout << "Animal created by copy." << endl; }
        void setName(string name) { this->name = name; };
        void speak() { cout << "My name is: " << name << endl; };
};

int main() {

    Animal animal1;
    animal1.setName("Freddy");

    /** This creates a new animal just by referancing the other animal.
    This happends because of an implecent copy function that c++
    or ones that we can create. **/
    Animal animal2 = animal1;
    animal2.setName("Bobby");
    
    animal1.speak();
    animal2.speak(); // This is blank if the copy constructure doesn't initalize anything.

    Animal animal3(animal1);
    animal3.speak();

    return 0;
}

// SIDE NOTE ON CONST: You con only call const functions inside other const functions