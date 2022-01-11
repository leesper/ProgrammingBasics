//
// 请编程输出长度为n的实心等腰直角三角形
//

#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
}

