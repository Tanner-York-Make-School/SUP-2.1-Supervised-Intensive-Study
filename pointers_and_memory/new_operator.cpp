#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        Animal() { cout << "Animal created." << endl; }
        Animal(const Animal& other): name(other.name) {
            cout << "Animal creatd by copying." << endl;
        }
        ~Animal() { cout << "Destructor called." << endl; }
        void setName(string name) { this->name = name; }
        void speak() { cout << "My name is: " << name << endl; }
};

int main() {

    Animal *pCat1 = new Animal();
    // This is one way to use class pointers but there's a special way to do it in C++
    // (*pCat1).setName("Freddy");
    // (*pCat1).speak();
    pCat1->.setName("Freddy"); // Remeber the this-> pointer!! its similar
    pCat1->.speak();

    // !!!!! When using 'new' you have to delete the object yourself or it will stay in memeory
    // after the process is run!!!!
    delete pCat1;

    return 0;
}