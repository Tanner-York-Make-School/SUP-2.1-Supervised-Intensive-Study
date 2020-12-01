#include <iostream>
#include "Cat.cpp"
using namespace std;

int main() {
    Cat jim;
    /* Right now, you have to run this method before the speak method or it will 
    give a weird output because happy isn't set yet but we should use a constructor 
    which well talk about in the next lesson */
    jim.setHappy(false);
    jim.speak();

    Cat bob;
    jim.setHappy(false);
    bob.speak();

    return 0;
}