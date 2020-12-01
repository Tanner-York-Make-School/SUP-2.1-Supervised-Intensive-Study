#include <iostream>
#include "Person.cpp"
using namespace std;

int main() {
    Person person1;
    Person person2("Tanner", 19);

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;

    return 0;
}