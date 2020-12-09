#include <iostream>
using namespace std;

int main() {

    string stringText = "hello";
    char arrayText[] = {'h', 'e', 'l', 'l', 'o'};
    char arrayText2[] = "hello";

    // They're all outputed the same way!
    cout << stringText << endl;
    cout << arrayText << endl;
    cout << arrayText2 << endl;

    for (int i = 0; i < sizeof(arrayText2); i++) {
        cout << i << ": " << arrayText2[i] << endl;
    } // The last element is 0 or empty, the null terminator

    int k = 0;
    while (true) {
        // You can use the null terminator to end a loop
        if (arrayText2[k] == 0) 
            break;
        cout << arrayText2[k] << flush;
        k++;
    }


    return 0;
}