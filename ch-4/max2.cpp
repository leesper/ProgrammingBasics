//
// 第二大的数
//

#include <iostream>
using namespace std;

int main() {
    int a1 = -1, a2 = -2;
    int n, num;
    int* less;

    cin >> n;
    while (n > 0) {
        cin >> num;
        less = a1 < a2 ? &a1 : &a2;
        if (*less < num) {
            *less = num;
        }
        n--;
    }

    cout << (a1 > a2 ? a2 : a1) << endl;

    return 0;
}
