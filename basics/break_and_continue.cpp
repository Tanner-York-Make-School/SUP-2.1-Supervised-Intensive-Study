#include <iostream>
using namespace std;

int main() {

    // Break
    // for (int i = 0; i < 5; i++) {
    //     cout << "Break " << i << endl;

    //     if (i == 3) break;

    //     cout << "Looping..." << endl;

    // }

    // Continue
    // for (int i = 0; i < 5; i++) {
    //     cout << "Continue " << i << endl;

    //     if (i == 3) continue;

    //     cout << "Looping..." << endl;

    // }

    // Do-While Loop
    string password = "password";
    string input;
     
    do {
        /* Something to note, variables in here cannot be used outside of here but we can also use the same name 
        of a variable outside of it's scope and it will use that vaiable instread of the original variable*/
        cout << "Enter password: " << endl;
        cin >> input;

        if (input == password) break;
        
        cout << "Access denied." << endl;
    } while(true);

    cout << "Password accepted." << endl;


    return 0;
}