//
// 斐波那契数列
//
#include <iostream>
using namespace std;

int fibo(int n);
int main() {
    int n;

    while (cin >> n) {
        cout << fibo(n) << endl;
    }
    return 0;
}

int fibo(int n) {
    if (n == 0 || n == 1)
        return 1;

    int fn, fn_1 = 1, fn_2 = 1;
    for (int i = 0; i < n - 1; i++) {
        fn = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fn;
    }
    return fn;
}