#include <iostream>
#include "Cat.cpp" // This is only requred because of my compiler, some will interpret all the cpp file for you.
#include "Cat.h"
using namespace std;

int main() {

    Cat cat;
    cat.speak();

    return 0;
}