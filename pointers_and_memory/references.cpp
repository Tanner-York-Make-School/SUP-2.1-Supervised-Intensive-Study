#include <iostream>
using namespace std;

void changeSomething(double &value) {
    value = 123.4;
}

int main() {

    /* Since the "&" symbol is creates adress to a value, if we set 
    this to another varable, we're setting it to the adress of the value
    rather than just the value. S0, if value2 changes so does value1 */ 
    int value1 = 0;
    int &value2 = value1;
    value2 = 10;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;


    /* This meas we can create functions that use references to change values
    outside of there scope rather than using the sometimes more complex pointers */
    double value = 4.32;
    changeSomething(value);
    cout << value << endl;

}