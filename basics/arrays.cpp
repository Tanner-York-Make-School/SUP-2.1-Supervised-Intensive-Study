#include <iostream>
using namespace std;

int main() {

    cout << "Array or integers" << endl;
    cout << "=================" << endl;
    int values[3]; // You set the number of elements that can be in an array

    values[0] = 88;
    // values[1] = 123;
    values[2] = 7;

    cout << values[0] << endl; 
    cout << values[1] << endl; // Because it's not set, it gives us the rubish that siting around in the comuter memeory
    cout << values[2] << endl; 

    cout << endl << "Array of dubles" << endl;
    cout << "=================" << endl;
    double numbers[4] = {4.5, 2.3, 6.7, 2.0};
    for (int i = 0; i < 4; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
        numbers[i] = 77;
    }
    for (int i = 0; i < 4; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl << "Initializing with zero values" << endl;
    cout << "=================" << endl;
    int numberArray[8] = {};
    for (int i = 0; i < 4; i++) {
        cout << "Element at index " << i << ": " << numberArray[i] << endl;
    }

    cout << endl << "Array of strings" << endl;
    cout << "=================" << endl;
    // You can intialized the array with {}, you don't need to add the intial size
    string stringArray[] = {"The", "dog", "went", "bork"};
    for (int i = 0; i < 4; i++) {
        cout << "Element at index " << i << ": " << stringArray[i] << endl;
    }
    // Some c++ compilers will not stop you from going past the number of elements in the array!!!!
    // cout << "Out of index:" << stringArray[5] << endl; // This may work for some c++ compilers 


    cout << endl << "Sizeof Arrays" << endl;
    cout << "=================" << endl;
    int elements[] = {4, 5, 6, 7};
    cout << "Size of integer array: " << sizeof(elements) << endl;
    cout << "Size of integer: " << sizeof(int) << endl;
    // The size of the array is 16 bites because there are 4 ints, each being 4 bites
    // Another way we can get the number of elements in an array is by dividing the sizeof the array my it's type!
    cout << "Number of elements: " << sizeof(elements)/sizeof(int) << endl;

    return 0;
}