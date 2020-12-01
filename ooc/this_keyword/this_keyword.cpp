#include <iostream>
#include "Person.cpp"
using namespace std;

int main() {
    Person person("Tanner", 19);

    // We can get the referece to the object outside of the class as well
    cout << person.toString() << "; memory location: " << &person << endl;

    return 0;
}