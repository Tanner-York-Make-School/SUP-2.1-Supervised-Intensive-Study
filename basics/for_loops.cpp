#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 10; i++) { // i is not avalable outside this loop
        cout << i << endl;
    } 

    return 0;
}