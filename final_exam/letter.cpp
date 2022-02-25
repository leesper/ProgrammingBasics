//
// 统计区间字母个数
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q, l, r;
    int letterCounts[26];

    for (char c = 'a'; c <= 'z'; c++) {
        letterCounts[c - 'a'] = 0;
    }

    cin >> s >> q;

    for (int i = 0; i < q; i++) {
        cin >> l >> r;

        for (int j = l; j <= r; j++)
            letterCounts[s[j] - 'a']++;

        for (char c = 'a'; c <= 'z'; c++) {
            if (letterCounts[c - 'a'] > 0) {
                cout << c << ":" << letterCounts[c - 'a'] << " ";
                letterCounts[c - 'a'] = 0;
            }
        }
        cout << endl;
    }

    return 0;
}