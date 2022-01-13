//
// 函数计算
//
#include <iostream>
using namespace std;

int f(int n, int x);
int main() {
    int x, n;
    cin >> x >> n;
    cout << f(n, x) << endl;
    return 0;
}

int f(int n, int x) {
    if (n <= 0)
        return 0;

    if (n == 1)
        return x;

    return f(n - 1, x) + f(n / 2, x) + f(n / 3, x);
}
