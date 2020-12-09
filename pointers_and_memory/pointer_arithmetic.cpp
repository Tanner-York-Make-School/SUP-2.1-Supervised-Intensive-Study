#include <iostream>
using namespace std;

int main() {

    const int ELEMENTS = 5; // Makes the varibale unable to be changed
    string texts[ELEMENTS] = {"one", "two", "three", "four", "five"};
    string *pTexts = texts;

    cout << "======Addition======" << endl;
    cout << *pTexts << endl;
    pTexts += 3;
    cout << *pTexts << endl;

    cout << "======Subtraction======" << endl;
    cout << *pTexts << endl;
    pTexts -= 2;
    cout << *pTexts << endl;

    cout << "======Comparison======" << endl;
    // You can set this to a referance to an element off the end of an array!
    // Just don't try to read or write from it!!!!
    string *pEnd = &texts[ELEMENTS];
    
    while(pTexts != pEnd) {
        cout << *pTexts << endl;
        pTexts ++;
    }

    cout << "======Difference Between Pointers======" << endl;
    pTexts = &texts[0];
    // Could be a large number so we use long but its not in this case
    long elements = (long)(pEnd - pTexts); // number of elements in the array!

    cout << elements << endl;

    cout << "======Division======" << endl;
    pTexts = &texts[0];
    pTexts += ELEMENTS/2; // Middle element in the array!

    cout << *pTexts << endl;

    return 0;
}