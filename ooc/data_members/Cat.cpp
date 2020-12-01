#include <iostream>
using namespace std;

class Cat {
    private:
        bool happy = true;

    public:
        void setHappy(bool value) {
            happy = value; // Look! this isn't using the ussualy this/self pointers!!!!
        };

        void speak() {
            if (happy) {
                cout << "Meouw!" << endl;
            } else {
                cout << "Sssssssss!!" << endl;
            }
        };
};