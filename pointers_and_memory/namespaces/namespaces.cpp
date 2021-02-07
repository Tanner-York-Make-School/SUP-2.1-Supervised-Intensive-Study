#include <iostream>
#include "Animals.h"
#include "Cat.h"
using namespace std;
using namespace cats; 

// using namespace jwp;
/* two namespaces with the same class requires us to choose 
which namespace class we want to use or we'll get an ambiguous error */

int main () {

    Cat cat;
    cat.speak();

    jwp::Cat cat2; // works even if the namespace isn't included
    cat2.speak();

    cats::Cat cat3; // user paticular namesapces using this syntax
    cat3.speak();

    // Variables work too!
    cout << CATNAME << endl;
    cout << jwp::CATNAME << endl;
    cout << cats::CATNAME << endl;

    return 0;
}