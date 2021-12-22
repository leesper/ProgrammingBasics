// 电子秤
#include <iostream>
using namespace std;

int main() {
    double price = 0.0, total = 0.0, quantity = 0.0;
    string command;

    do {
        cout << "Input price: ";
        cin >> price;

        cout << "Input quantity: ";
        cin >> quantity;

        total += price * quantity;

        cout << "Continue?(y/n)";
        cin >> command;

    } while (command == "y");

    cout << "Total price: " << total << endl;

    return 0;
}
