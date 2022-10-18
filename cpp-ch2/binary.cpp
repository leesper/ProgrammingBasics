#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string binary;
    int num = 0;
    cin >> binary;

    // convert to decimal
    for (size_t i = 0; i < binary.length(); i++) {
        num += (binary[i] - '0') * int(pow(2, binary.length() - 1 - i));
    }

    cout << num << endl;

    return 0;
}