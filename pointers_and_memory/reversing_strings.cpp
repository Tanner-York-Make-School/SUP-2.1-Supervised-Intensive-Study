#include <iostream>
using namespace std;

int main() {

    char text[] = "Hello";
    int nChars = sizeof(text)-1;

    for (int i = 0; i < nChars/2; i++) {
        char save = text[i];
        text[i] = text[nChars-1-i];
        text[nChars-1-i] = save;
    }

    cout << text << endl;

    return 0;
}