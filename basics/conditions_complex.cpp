#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Complex Conditions
    /*
    * == equality test
    * != not equal
    * < less than
    * > greater than
    * <= less than or equal to
    * >= greater than or equal to
    */

    int value1 = 7;
    int value2 = 2;

    if (value1 <= 7) {
        cout << "Condition 1: true" << endl;
    } else {
        cout << "Condition 1: false" << endl;
    }
   
    if (value1 <= 7 && value2 == 4) {
        cout << "Condition 2: true" << endl;
    } else {
        cout << "Condition 2: false" << endl;
    }
   
    if (value1 <= 7 || value2 > 3) { // Can be both "or" and "||" based on the compiler  
        cout << "Condition 3: true" << endl;
    } else {
        cout << "Condition 3: false" << endl;
    }
    // Make sure that your conditions don't get to carzy and are easy to read
    if ((value1 != 8 && value1 == 7) || value1 < 10) { // Add () to help make it clearer  
        cout << "Condition 3: true" << endl;
    } else {
        cout << "Condition 3: false" << endl;
    }
    // Conditions can also be used in variabels
    bool condition1 = (value1 != 8) && (value2 == 2);
    bool condition2 = value1 < 10;
    // Same as above but with variables
    if (condition1 || condition2) {
        cout << "Condition 4: true" << endl;
    } else {
        cout << "Condition 4: false" << endl;
    }

    return 0;
}