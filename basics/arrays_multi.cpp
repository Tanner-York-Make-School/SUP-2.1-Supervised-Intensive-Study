#include <iostream>
using namespace std;

int main() {

    cout << "Times Table" << endl;
    cout << "=================" << endl;
    int timesTable[10][10] = {};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            timesTable[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << timesTable[i][j] << " " << flush;
        }
        cout << endl;
    }

    cout << endl << "Sizeof Multidimensional Arrays" << endl;
    cout << "=================" << endl;
    int multiArray[2][2] = {
        {1, 2},
        {3, 4}
    };
    cout << "Size of array: " << sizeof(multiArray) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    // The size of the array is 16 because the size of ints is 4 and there are a total of 4 ints in the array


    cout << endl << "Using Sizeof to get Multidimensional Array Elements" << endl;
    cout << "=================" << endl;
    string animals[][3] = {{"fox", "dog", "cat"}, {"mouse", "squirrel", "parrot"}};

    for (int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
        for (int j = 0; j < sizeof(animals[i])/sizeof(string); j++) {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}