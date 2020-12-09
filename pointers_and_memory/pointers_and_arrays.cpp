#include <iostream>
using namespace std;

int main() {

    string texts[] = {"one", "two", "three"}; // Knows the size of the array
    string *pTexts = texts; // Doesnt know the size of the array

    for (int i=0; i<sizeof(texts)/sizeof(string); i++) {
        // This can work with either texts or pTexts!
        // cout << texts[i] << " " << flush;
        cout << pTexts[i] << " " << flush;
    }

    cout << endl << pTexts << endl;
    for (int i=0; i<sizeof(texts)/sizeof(string); i++, pTexts++) { // We can also add pTexts++ in the for loop here
        // TWe can see what the pointer is pointing to as it goes through the array
        cout << *pTexts << " " << flush;

        // We can use "pTexts = pTexts + 1" "pTexts += 1" and "pTexts++"
        // pTexts++; // Effects the variable outside if this loop
    }
    cout << endl << pTexts << endl;

    string *pElement = texts; // could also be &texts[0]
    // Need to use the "&" symbol to get the adress of elements like in previous lesson
    string *pEnd = &texts[2]; // parenthesies may be need "&()"

    while(true) {
        cout << *pElement << " " << flush;
        if (pElement == pEnd) break;
        pElement++;
    }



    return 0;
}