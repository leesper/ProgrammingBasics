// 递归阶乘
#include <iostream>
using namespace std;

int fact(int n);

int main() {
    cout << fact(5) << endl;
    return 0;
}

int fact(int n) {
    return n == 1 ? 1 : n * fact(n-1);
}

