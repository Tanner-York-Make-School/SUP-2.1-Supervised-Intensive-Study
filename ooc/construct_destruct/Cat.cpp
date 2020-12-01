#include <iostream>
using namespace std;

class Cat {
    private:
        bool happy;

    public:
        // Constructor
        Cat() {
            cout << "Cat created." << endl;
            happy = true;
        }

        // Desctructor
        ~Cat() {
            cout << "Cat destroyed." << endl;
        }

        void speak() {
            if (happy) {
                cout << "Meouw!" << endl;
            } else {
                cout << "Sssssss!" << endl;
            }
        };
};