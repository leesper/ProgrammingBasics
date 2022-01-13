//
// 下楼问题
//
#include <iostream>
using namespace std;

int stage(int h, int* f, int* x);
int main() {
    int h, n, s;
    int *f, *x;

    cin >> h >> n;

    f = new int[h + 1];
    x = new int[h + 1];

    for (int i = 0; i <= h; i++) {
        f[i] = 0;
        x[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> s;
        x[s] = 0;
    }

    cout << stage(h, f, x) << endl;

    delete[] f;
    delete[] x;

    return 0;
}

int stage(int h, int* f, int* x) {
    f[0] = 1;
    f[1] = 1;

    for (int s = 2; s <= h; s++) {
        int s_1 = s - 1;
        int s_2 = s - 2;
        int s_3 = s - 3;
        f[s] = x[s_1] * f[s_1] + x[s_2] * f[s_2] + (s_3 >= 0 ? x[s_3] * f[s_3] : 0);
    }

    return f[h];
}