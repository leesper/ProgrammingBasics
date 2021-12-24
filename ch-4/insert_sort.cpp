// 插入排序
#include <iostream>
using namespace std;

int main() {
    int cards[] = {83, 41, 56, 10, 22, 54, 6, 13, 93};

    for (int i = 1; i < 9; i++) {
        int pos = -1;
        int target = cards[i];
        for (int j = 0; j < i; j++) {
            if (cards[j] > target) {
                pos = j;
                break;
            }
        }

        if (pos != -1) {
            for (int j = i; j > pos; j--) {
                cards[j] = cards[j-1];
            }
            cards[pos] = target;
        }

    }

    for (int i = 0; i < 9; i++) {
        cout << cards[i] << endl;
    }

    return 0;
}
