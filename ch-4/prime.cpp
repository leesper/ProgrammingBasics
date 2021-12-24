// 筛法求素数
#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    int number[N+1];

    for (int i = 1; i < N+1; i++) {
        number[i] = 1;
    }

    for (int i = 2; i * i <= N; i++) {
        if (number[i] == 1) {
            for (int j = i+1; j < N+1; j++) {
                if (j % i == 0)
                    number[j] = 0;
            }
        }
    }

    for (int i = 1; i < N+1; i++)
        if (number[i] == 1)
            cout << i << endl;

    return 0;
}
