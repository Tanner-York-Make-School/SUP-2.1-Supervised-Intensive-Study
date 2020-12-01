#include <iostream>
#include <sstream>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        // There can me multiple constructors!!!
        Person() {
            name = "undefied";
            age = 0;
        };
        Person(string newName, int newAge) {
            name = newName;
            age = newAge;
        };
        string toString() {
            stringstream ss;
            ss << "Person<";
            ss << name;
            ss << ", ";
            ss << age;
            ss << ">";

            return ss.str();
        };
};