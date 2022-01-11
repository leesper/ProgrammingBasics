//
// 输入一个年份，判断其是否是闰年
//

#include <iostream>
using namespace std;

int main() {
    int year;

    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
