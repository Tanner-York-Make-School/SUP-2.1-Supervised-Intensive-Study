#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float fValue = 123.456789;

    cout << "Size of float: " << sizeof(float) << endl;

    // We can import iomanip to use the fixed variables that sets the output to standard notation
    cout << fixed << "Fixed Float: " << fValue << endl;
    // We can also set it to scientific notation as well
    cout << scientific << "Scientific Float: " << fValue << endl;
    // There is also a limit to the number of digit it prints out but can be changed with the precision function 
    cout << setprecision(20) << fixed << "Fixed 20 Precision Float: " << fValue << endl;
    // Doubles have even more precision avalability (digits)
    long double dValue = 123.456789;
    cout << setprecision(20) << fixed << "Fixed 20 Precision Double: " << dValue << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;

    return 0;
}