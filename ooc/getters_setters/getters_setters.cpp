#include <iostream>
#include "Person.cpp"
using namespace std;

int main() {
    Person person;
    
    cout << person.toString() << endl;

    person.setName("John");

    cout << person.toString() << endl;

    cout << "Name of person with get method " << person.getName() << endl;

    return 0;
}