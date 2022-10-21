#include <iostream>
using namespace std;
class PassWord {
private:
    int key;
public:
    PassWord(int);
    char convert(const char); // 加密函数
};

PassWord::PassWord(int k) {
    key = k;
}

char PassWord::convert(const char c) {
    return 'A' + ((c - 'A') * key) % 26;
}

int main() {
    int key, nchars;
    string plainText;
    cin >> key;
    cin >> nchars >> plainText;
    PassWord passWord(key);
    for (int i = 0; i < nchars; i++) {
        cout << passWord.convert(plainText[i]);
    }
    cout << endl;
    return 0;
}