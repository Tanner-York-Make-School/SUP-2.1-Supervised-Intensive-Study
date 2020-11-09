#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    // If Statements
    string password = "password";
    cout << "Enter your password: " << flush;

    string passInput;
    cin >> passInput;

    if (password == passInput) {
        cout << "Correct password entered. Welcome to the page!" << endl;
    }

    // If Else If Statments
    cout << "1. \tAdd new record." << endl; // TABS!!!
    cout << "2. \tDelete new record." << endl;
    cout << "3. \tReview new record." << endl;
    cout << "4. \tSearch records." << endl;
    cout << "5. \tQuit" << endl;

    cout << "Enter your selection: " << flush;

    int optInput;
    cin >> optInput;

    if (optInput < 3) {
        cout << "Invalid privileges to use this menu option." << endl;
    } else if (optInput == 3) {
        cout << "Records:" << endl;
        cout << "BARK! BARK!!!" << endl;
        cout << "Sooooo is this thing on?" << endl;
        cout << "I hate my job...." << endl;
    } else if (optInput == 4) {
        cout << "Searching records..." << endl;
    } else if (optInput == 5) {
        cout << "Ending the simulation." << endl;
    } else {
        cout << "Error invalid input given." << endl;
    }

    // Compairing Floats and Doubles
    float value = 1.1;

    if (value == 1.1) { // Gives us not equal???
        cout << "equals" << endl;
    } else {
        cout << "not equal" << endl; 
    }
    // The float is never exactly equal because it can't be stored precisely enough
    cout << setprecision(10) << value << endl;
    // In order to get the results we're expecting, you have to evaluate it a different way
    if (value < 1.11 and value > 1.0) { // this can be either "and" or "&&" depending on the compiler
        cout << "equals" << endl;
    } else {
        cout << "not equals" << endl;
    }

    return 0;
}