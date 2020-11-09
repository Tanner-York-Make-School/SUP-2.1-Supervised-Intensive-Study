#include <iostream>
using namespace std;

int main() {

    // The clasic bool (true/false) data type
    bool bValue = false; // represented as 0/1
    cout << bValue << endl;
    // There is also a new type that's meant to represent single ascii characters
    char cValue = 55;
    cout << cValue << endl; // This outputs 7 becase 54 is represented by the character 7
    char cValue2 = '7'; // Isn't the same as int 7
    // If we want to output 55, we need to use it's representation '7' and some special code
    cout << (int)cValue2 << endl;
    // THE SIZE OF CHAR IS IMPORTANT BECAUSE YOU TYPICALLY USE IT TO SET SPECIFC BYTES 
    cout << "Sizeof char: " << sizeof(char) << endl;

    // Another type fo char
    wchar_t wValue = 'i';
    cout << wValue << endl;
    cout << "Size of wchar: " << sizeof(wchar_t) << endl;

    // Cast values as different types is done like this...
    cout << (int)'1' << endl; // '1' is revaluated initially as a char not a string

    return 0;
}