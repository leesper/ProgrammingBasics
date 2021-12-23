// 谁是嫌疑犯

#include <iostream>
#include <bitset>
using namespace std;

int index(char c) {
    return c - 'A';
}

char suspect(int idx) {
    return 'A' + idx;
}

int main() {
    for (int i = 0; i < (1 << 6); i++) {
        bool found = true;
        bitset<6> bits(i);

        // A B至少有一人作案
        if (!bits[index('A')] && !bits[index('B')])
            found = false;
        // A E F中至少有两人参与作案
        if ((bits[index('A')] && !bits[index('E')] && !bits[index('F')])
        || (!bits[index('A')] && bits[index('E')] && !bits[index('F')])
        || (!bits[index('A')] && !bits[index('E')] && bits[index('F')])
        || (!bits[index('A')] && !bits[index('E')] && !bits[index('F')]))
            found = false;

        // A D不可能是同案犯
        if (bits[index('A')] && bits[index('D')])
            found = false;

        // B C或同时作案或与本案无关
        if ((bits[index('B')] && !bits[index('C')]) ||
        (!bits[index('B')] && bits[index('C')]))
            found = false;

        // C D中有且仅有一人作案
        if ((bits[index('C')] && bits[index('D')]) ||
        (!bits[index('C')] && !bits[index('D')]))
            found = false;

        // 若D没有参与作案，则E也不可能参与作案
        if (!bits[index('D')] && bits[index('E')])
            found = false;

        if (found) {
            cout << "SOLUTION: " << endl;
            for (int idx = 0; idx < bits.size(); idx++) {
                if (bits.test(idx)) {
                    cout << suspect(idx) << " SUSPECT" << endl;
                }
            }
        }
    }
    return 0;
}

