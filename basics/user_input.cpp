#include <iostream>
using namespace std;

int main() {

    string name;
    int age;

    cout << "Enter your name:" << flush;
    cin >> name; // >> is the extraction operation in c++
    cout << "Welcome: " << name << endl;

    cout << "How old are you " << name << ":" << flush;
    cin >> age;
    cout << "Your name is " << name << " and you're " << age << " years old." << endl;

    return 0;
}