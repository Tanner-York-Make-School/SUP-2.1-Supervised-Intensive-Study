#include <iostream>
#include "Cat.cpp"
using namespace std;

int main() {
    cout << "Starting program ..." << endl;
    { 
    /* We can use curly brakets inside other brackets to aleave 
    memory early/before the functon is done */
        Cat bob;
        bob.speak();
    }
    cout << "Ending program ... " << endl;
    return 0;
}