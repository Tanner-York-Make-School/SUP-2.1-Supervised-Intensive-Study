#include <iostream>
using namespace std;

// C++ variables are only affected in their scope unless you pass in a pointer to the function
void manipulate(double *value) { 
    cout << "2. Value of double in manipulate: " << *value << endl;
    *value = 10.0; // In english, set the value at pointer value to 10, thus changing the value outside of the funvtion scope
    cout << "3. Value of double in manipulate: " << *value << endl;
}

int main() {

    int nValue = 8;
    // Int pointer (*) to the adress (&) of nValue
    int* pValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int value: " << pValue << endl;
    cout << "Int value via pointer: " << *pValue << endl;
    cout << "==========================" << endl;

    double dValue = 123.4;
    
    cout << "1. dValue: " << dValue << endl;
    manipulate(&dValue);
    cout << "4. dValue: " << dValue << endl;

    return 0;
}