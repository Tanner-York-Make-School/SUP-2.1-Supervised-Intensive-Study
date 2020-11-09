#include <iostream>
using namespace std;

int main() {
    
    // While Loop
    int i = 0; // loop counters can have single letter varaible name
    while(i <= 5) {
        cout << i << endl;
        i ++; // or i += 1
    }

    // Do-While Loop
    string password = "password";
    string input;
     
    do {
        /* Something to note, variables in here cannot be used outside of here but we can also use the same name 
        of a variable outside of it's scope and it will use that vaiable instread of the original variable*/
        cout << "Enter password: " << endl;
        cin >> input;

        if (input != password) {
            cout << "Access denied." << endl;
        }
    } while(input != password);

    cout << "Password accepted." << endl;

    return 0;
}