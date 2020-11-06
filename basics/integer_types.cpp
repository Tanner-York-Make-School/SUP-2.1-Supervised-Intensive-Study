#include <iostream>
#include <limits> // Adds the limit.h file from your hard drive
using namespace std;

int main() {

    int value = 534534;
    cout << value << endl;

    cout << "Max int value: " << INT_MAX << endl; // Max value for the int data type
    cout << "Min int value: " << INT_MIN << endl; // Min vaue for the int data type

    // What is you want a larger interger that the max?
    long int longIntInteger = 234523452345345; // use long before declairing int 
    long int longInteger = 234523452345345; // or just use long 
    cout << "Long Integer: " << longIntInteger << endl;
    cout << "Long Integer: " << longInteger << endl;

    // If you don't use long, then it will return a number in the range int's max or min value
    int longestInteger = longInteger;
    cout << "Longest Integer: " << longestInteger << endl;

    // You can also have smaller/shorter number
    short shortInteger = 23452;
    cout << "Short Integer: " << shortInteger << endl;

    // There's also a method for determinig how much menmory something is taking up
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;

    // There are also unsigned integers where your can't asign it to be negative
    unsigned unsignedInteger = 234412;
    cout << "Unsigned Integer: " << unsignedInteger << endl;


    return 0;
}