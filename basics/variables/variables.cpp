#include <iostream>
using namespace std;

int main() {
    
    int numberCats = 5;
    int numberDogs = 7;
    int numberPets = numberCats + numberDogs;

    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs; " << numberDogs << endl;
    cout << "Total number of pets: " << numberPets << endl;

    cout << "New dog acquired!" << endl;
    numberDogs += 1;
    cout << "Number of dogs: " << numberDogs << endl;

    return 0;
}