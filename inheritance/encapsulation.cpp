#include <iostream>
using namespace std;

/* The idea behind encapsulation is that we should make as many things 
private as we can so that the end user can't access it and have the 
chance of creating some tangled mess.*/

class Frog {
    private: // Good practice is to have different sections of private data
        string name;

    private: // Like one for instance data like above and functions like this one
        string getName() { return name; }

    public:
        Frog(string name): name(name) {}
        void info() { cout << "My name is: " << name << endl; }
};

int main() {

    Frog frog("Freddy");

    frog.info();

    return 0;
}