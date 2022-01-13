//
// 猴子跳台阶
//

#include <iostream>
using namespace std;

int monkey(int n, int x, int y, int* f);
int main() {
    int n, x, y;
    int *f;

    cin >> n >> x >> y;
    f = new int[n + 1];

    for (int i = 0; i <= n; i++) {
        f[i] = 0;
    }

    int result = monkey(n, x, y ,f);

    if (result > 0) {
        cout << result << endl;
    } else {
        cout << "sorry" << endl;
    }

    delete[] f;

    return 0;
}

int monkey(int n, int x, int y, int* f) {
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (x != y) {
            int i_x = i - x;
            int i_y = i - y;
            f[i] = (i_x >= 0 ? f[i_x] : 0) + (i_y >= 0 ? f[i_y] : 0);
        } else {
            if (i % x == 0) {
                f[i] = 1;
            } else {
                f[i] = 0;
            }
        }
    }
    return f[n];
}