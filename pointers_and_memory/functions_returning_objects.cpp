#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        Animal() { cout << "Animal created." << endl; }
        Animal(const Animal& other) { name = other.name; cout << "Animal created by copy." << endl; }; 
        ~Animal() { cout << "Destructor called." << endl; };
        void setName(string name) { this->name = name; };
        void speak() { cout << "My name is: " << name << endl; };
};

// BAD
// Animal& createAnimal() {
//     /** Beause the scope of a is in this function, its deleted when the function is done and we're
//     left with a refrence to an object that no longer exist and if this code works, its by chance. **/
//     Animal a;
//     a.setName("Bertie");
//     return a;
// }

// Better and its more effecent that copying the object
// Downside is that we have to manual delete the object or it will stay in memeory
Animal *createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main() {

    Animal *pFrog = createAnimal();

    pFrog->speak();
    delete pFrog;

    return 0;
}
