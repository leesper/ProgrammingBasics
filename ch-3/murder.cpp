//
// 巴斯维克命案嫌疑犯问题
//

#include <iostream>
using namespace std;

int main() {
    char murder;
    int truths;

    for (murder = 'A'; murder <= 'F'; murder++) {
        truths = 0;

        // A：我不是罪犯
        if (murder != 'A')
            truths++;

        // B：A、C中有一个是罪犯
        if (murder == 'A' || murder == 'C')
            truths++;

        // C：A和B说了假话
        if (murder == 'A' && murder != 'A' && murder != 'C')
            truths++;

        // D：C和F说了假话
        if (murder != 'F' && (murder != 'A' || murder == 'A' || murder == 'C'))
            truths++;

        // E：其他五个人中，只有A和D说了真话
        if (murder != 'A' && murder != 'F' &&
        (murder != 'F' && (murder != 'A' || murder == 'A' || murder == 'C')) &&
        (murder != 'A' && murder != 'C') &&
        (murder != 'A' || murder == 'A' || murder == 'C'))
            truths++;

        // F：我是罪犯
        if (murder == 'F')
            truths++;

        if (truths == 3)
            cout << murder << endl;
    }
    return 0;
}

