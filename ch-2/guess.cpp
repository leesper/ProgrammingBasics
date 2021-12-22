// 生成猜数字游戏的卡片
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int n, index, number;
    map<int, set<int> > tables;

    cout << "Input a number (N > 1): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        index = 0;
        number = i;
        while (number > 0) {
            if (number % 2 != 0) {
                if (tables.find(index) == tables.end()) {
                    set<int> s;
                    s.insert(i);
                    tables[index] = s;
                } else {
                    tables[index].insert(i);
                }
            }
            index++;
            number /= 2;
        }
    }

    cout << "Tables for guessing number 1~" << n << ": " << endl;
    auto it = tables.begin();
    while (it != tables.end()) {
        cout << "TABLE " << it->first << ": " << endl;
        auto sit = it->second.begin();
        index = 0;
        while (sit != it->second.end()) {
            cout << *sit << "\t";
            sit++;
            index++;
            if (index % 5 == 0) {
                cout << endl;
            }
        }
        it++;
        cout << endl;
    }

    return 0;
}


