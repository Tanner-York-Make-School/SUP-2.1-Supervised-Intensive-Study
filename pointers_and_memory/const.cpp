#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        void setName(string name) {this->name = name;}
        void speak() {cout << "My name is:" << name << endl;}
};

int main() {

    int value = 7;
    value = 10;

    cout << value << endl;

    return 0;
}