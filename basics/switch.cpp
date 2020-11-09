#include <iostream>
using namespace std;

int main() {

    int value = 6;

    switch (value) {
        case 4:
            cout << "Value is 4" << endl;
            break;
        case 5:
            cout << "Valse is 5" << endl;
            break;
        default:
            cout << "Unrecognized value." <<  endl;
    }

    return 0;
}