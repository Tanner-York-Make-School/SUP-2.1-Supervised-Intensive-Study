#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        void setName(string name) {this->name = name;}
        // Const can also make sure that functions can't change any variables
        void speak() const {cout << "My name is: " << name << endl;} // if say, name = "test" was in this function it would fail
};

int main() {

    // Const, like in Javascript, prevents the variable from being changed
    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;
    animal.setName("Freddy");
    animal.speak();

    // The position of the const matters!!!
    int value = 8;
    int *pValue = &value;
    // const int *pValue = &value; // Read it backwards, this is a pointer to an int thats constant.
    // int * const pValue = &value; // Read it backwards, this is a constant pointer to an int.
    // const int * const pValue = &value; // Read it backwards, this is a constant pointer to an int thats constant.
    cout << *pValue << endl;

    int number = 11;
    pValue = &number; // Error with this: int * const pValue = &value;
    *pValue = 12; // Error with this: const int *pValue = &value;

    cout << *pValue << endl;

    return 0;
}