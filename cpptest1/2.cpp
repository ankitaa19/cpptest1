   //cruise c++

#include <iostream>
using namespace std;

int main() {
    // Get speed input from the user
    int speed;
    cout << "Enter the speed of the cruise ship in KMPH: ";
    cin >> speed;

    // Categorize the cruise ship
    if (speed < 20) {
        cout << "Slow Cruise" << endl;
    } else if (speed >= 20 && speed < 40) {
        cout << "Regular Cruise" << endl;
    } else if (speed >= 40 && speed < 60) {
        cout << "Fast Cruise" << endl;
    } else {
        cout << "Luxury Cruise" << endl;
    }

    return 0;
}