// 选择排序
#include <iostream>
using namespace std;

int main() {
    int cards[] = {83, 41, 56, 10, 22, 54, 6, 13, 93};

    for (int i = 0; i < 9; i++) {
        int temp, min = 65536, pos = -1;
        for (int j = i; j < 9; j++) {
            if (cards[j] < min) {
                min = cards[j];
                pos = j;
            }
        }
        temp = cards[i];
        cards[i] = cards[pos];
        cards[pos] = temp;
    }

    for (int i = 0; i < 9; i++) {
        cout << cards[i] << endl;
    }

    return 0;
}

