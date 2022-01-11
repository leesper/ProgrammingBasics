//
// 巴斯维克命案嫌疑犯问题，换一种方式表达数据结构，形式会更简洁
//

#include <iostream>
using namespace std;

int fA(const int murder);
int fB(const int murder);
int fC(const int murder);
int fD(const int murder);
int fE(const int murder);
int fF(const int murder);

int main() {
    int murder, truths;

    for (int i = 0; i < 6; i++) {
        truths = 0;
        murder = 1 << i;

        // A：我不是罪犯
        truths += fA(murder);

        // B：A、C中有一个是罪犯
        truths += fB(murder);

        // C：A和B说了假话
        truths += fC(murder);

        // D：C和F说了假话
        truths += fD(murder);

        // E：其他五个人中，只有A和D说了真话
        truths += fE(murder);

        // F：我是罪犯
        truths += fF(murder);

        if (truths == 3)
            cout << (char)('A' + i) << endl;
    }

    return 0;
}

int fA(const int murder) {
    return !(murder & 1) ? 1 : 0;
}

int fB(const int murder) {
    return (murder & 1) || (murder & 4) ? 1 : 0;
}

int fC(const int murder) {
    return !fA(murder) && !fB(murder) ? 1 : 0;
}

int fD(const int murder) {
    return !fC(murder) && !fF(murder) ? 1 : 0;
}

int fE(const int murder) {
    return fA(murder) && !fB(murder) && !fC(murder) && fD(murder) && !fF(murder) ? 1 : 0;
}

int fF(const int murder) {
    return murder & 32 ? 1 : 0;
}