#include <iostream>
using namespace std;

/** You can declain variables here and use them in any function but you can't
 declar variables in functions and use them outside of them **/


/** We loose the number of elements in the array by doing this way so we  add
a new parameter for the number of elements **/
void show1(const int nElements, string texts[]) {

    // cout << sizeof(texts) << endl; returns size of pointer not the array

    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

// Using *texts is equivalent to using texts[]
void show2(const int nElements, string *texts) {

    // cout << sizeof(texts) << endl; returns size of pointer not the array

    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

/** We can keep the size of the array by using an reference to the array however
 you have to set the number of elements and add paretheses around the parameter name.**/
void show3(string (&texts)[3]) { // Not commonly used

    // cout << sizeof(texts) << endl; returns size of pointer not the array

    for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << texts[i] << endl;
    }
}

/** Don't return pointer to local vaiables becuase they will be deleted once their scope
 (inside to finction) is done **/
// string *getArray() {
//     string texts[] = {"one", "two", "three"};
//     return texts;
// }

// You can return arrays that use the new keyword bum remeber to delete it!!!
// This is common but not ideal
char *getMemory() {
    char *pMem = new char[10];
    return pMem;
}

// This is also common practice
void freeMemory(char *pMem) {
    delete [] pMem;
}

int main() {

    string texts[] = {"apple", "orange", "bannana"};

    show1(3, texts);
    cout << "==============" << endl;
    show2(3, texts);
    cout << "==============" << endl;
    show3(texts);

    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}