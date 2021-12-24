// 小朋友人数
#include <iostream>
using namespace std;

int main() {
    int r3 = 2, r5 = 2, r7 = 3;
    const int N = 200;
    bool children[N+1];

    for (int i = 0; i < N+1; i++)
        children[i] = false;

    for (int i = 1; i < N+1; i++)
        if ((i % 3 == r3) && (i % 5 == r5) && (i % 7 == r7))
            children[i] = true;

    for (int i = 1; i < N+1; i++)
        if (children[i])
            cout << i << endl;

    return 0;
}

