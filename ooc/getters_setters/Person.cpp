#include <iostream>
using namespace std;

class Person {
    private:
        string name;

    public:
        Person() {
            name = "Tanner";
        };
        string toString() {
            return "Person<" + name + ">";
        };
        // Setter
        void setName(string new_name) {
            name = new_name;
        }
        // Getter
        string getName() {
            return name;
        }
};