#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        Animal() { 
            cout << "Animal created." << endl; 
        }

        Animal(const Animal& other): name(other.name) {
            cout << "Animal creatd by copying." << endl;
        }

        ~Animal() { 
            cout << "Destructor called." << endl; 
        }

        void setName(string name) { 
            this->name = name; 
        }

        void speak() { 
            cout << "My name is: " << name << endl; 
        }
};

int main() {

    Animal *pAnimal = new Animal[10]; // Set the number of objects we want to create with square barckets
    // We ccan access different objects from the list of objects
    pAnimal[5].setName("Freddy");
    pAnimal[5].speak();
    delete [] pAnimal; /** This means we also need to tell delete of how many objects we're removing too 
        but this doenst need a number **/

    // Works with any type or calss
    char *pMem = new char[2];
    delete [] pMem;


    /** Activity: Create 26 animals all with names A-Z **/
    Animal *pAnimals = new Animal[26];
 
    // This solution increments based on the indexs of pAnimal and get the char from that
    // for (int i = 0; i < 26; i++) {
    //     pAnimals[i].setName(string(1, (char)(i + 97)));
    //     pAnimals[i].speak();
    // }

    // This solutions increments based on chars rather than on the index and gets the index from the char
    for (char c = 'a'; c < 123; c++) {
        pAnimals[(int)(c - 97)].setName(string(1, c));
        pAnimals[(int)(c - 97)].speak();
    }

    delete [] pAnimals;

    return 0;
}