#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person() {
            name = "undefined";
            age = 0;
        };
        // How do we tell the parameter name and the class variable name aprat?
        Person(string name, int age) {
            /* With the "this" keyword! Notice that "this" is not required like in other laguages 
            and that the syntax for accessing it is very different */
            this->name = name;
            this->age = age;

            // What is "this"?
            cout << "Memory location of object: " << this << endl; // 0x7ffeebb55738
            // It a hexadecimal reference/pointer to the object in memeory!
        }
        string toString() {
            return "Person<" + name + ">";
        }
};