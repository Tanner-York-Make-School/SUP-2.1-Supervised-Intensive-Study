#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string name = "Tanner";
    int age = 19;

    // You can't concatinate strings and int with base c++ but ou can with sstream (string stream)
    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    cout << ss.str() << endl;

    return 0;
}