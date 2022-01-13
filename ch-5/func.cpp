//
// 函数
//
#include <iostream>
using namespace std;

int f(int x);
int main() {
    int t, *x;

    cin >> t;
    x = new int[t];

    for (int i = 0; i < t; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < t; i++) {
        cout << f(x[i]) << endl;
    }

    delete[] x;
    return 0;
}

int f(int x) {
    if (x == 1)
        return 1;

    if (x > 1)
        return (x % 2 == 1) ? f((x - 1) / 2) + f((x + 1) / 2) : f(x / 2);
}