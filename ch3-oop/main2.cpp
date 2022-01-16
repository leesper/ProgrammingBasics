//
// 主函数
//
#include <iostream>
#include "score.h"
using namespace std;

int main() {
    int scores[] = {
            68, 19, 7, 85, 55, 16, 30, 29, 88, 7,
            99, 62, 19, 10, 49, 8, 62, 29, 3, 5,
            87, 50, 12, 61, 18, 20, 88, 37, 14, 22,
            99, 62, 44, 18, 56, 62, 39, 17, 88, 15,
            83, 91, 56, 8, 46, 46, 8, 36, 26, 0
    };
    Score s = Score(scores, 50);
    for (int i = 0; i < 10; i++) {
        cout << "number of scores between "
        << i * 10 + 1
        << " and "
        << i * 10 + 10
        << " : "
        << s[i]
        << endl;
    }
    return 0;
}
