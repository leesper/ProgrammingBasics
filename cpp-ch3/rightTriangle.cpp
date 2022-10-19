#include <iostream>
using namespace std;

bool isRightTriangle(int a, int b, int c);
int main() {
    int a, b, c;

    while (cin >> a >> b >> c) {
        if (isRightTriangle(a, b, c)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}

bool isRightTriangle(int a, int b, int c) {
    return (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);
}