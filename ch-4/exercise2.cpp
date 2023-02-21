#include <iostream>
using namespace std;

int main() {
    int bestCar;
    int expertCorrects;

    for (bestCar = 1; bestCar <= 4; bestCar++) {
       expertCorrects = (bestCar == 2) + (bestCar == 4) + (bestCar != 3) + (bestCar != 4);
       if (expertCorrects == 1) {
        break;
       }
    }

    if (bestCar == 2) {
        cout << "A is right and best car is " << bestCar << endl;
    }

    if (bestCar == 4) {
        cout << "B is right and best car is " << bestCar << endl;
    }

    if (bestCar != 3) {
        cout << "C is right and best car is " << bestCar << endl;
    }

    if (bestCar != 4) {
        cout << "D is right and best car is " << bestCar << endl;
    }
    return 0;
}