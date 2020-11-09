#include <iostream>
// Creating .h files with variables inside allow us to use functions before they're written
#include "prototypes.h" // This internally literally pastes the selected file into this file
/* These #includes are preprocessor commands that are run by the preprocessor before th file
is ran, changing the file based on these commands (there are more than just include!).*/
// Happens before the file is turned into binary code
using namespace std;


// We can also do this by placing the function prototype at the top of the file
/* void doSomething(); */

int main() {

    doSomething();

    return 0;
}

void doSomething() {
    cout << "SOMETHING" << endl;
}