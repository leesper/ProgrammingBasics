//
// E(m) = k*m mod 26 （明文 -> 密文）现给你一串密文，全部由大写字母组成，请破译出明文（密文 -> 明文）
//

#include <iostream>
#include <numeric>
using namespace std;

class PassWord {

private:

    int k;

public:

    PassWord(int secret): k(secret) {}

    char convert(const char); // 解密函数

};

char PassWord::convert(const char e) {
    int found = 0;
    int u = e - 'A';
    char m = 0;
    for (int x = 0; (26 * x + u) / k <= 25; x++) {
        if ((26 * x + u) % k == 0) {
           m = (26 * x + u) / k;
           found++;
        }
    }

    return found == 1 ? (m + 'A') : '0';
}

int main() {
    int k, n;
    cin >> k >> n;
    char c;

    PassWord passWord(k);

    for (int i = 0; i < n; i++) {
        cin >> c;
        cout << passWord.convert(c);
    }

    cout << endl;
    return 0;
}
