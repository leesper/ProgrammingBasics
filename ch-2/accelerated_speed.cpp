//
// 小I进行匀加速运动，初始速度为 0 m/s，t秒后，速度为 v m/s，问加速度是多少（m/s^2）？保留4位小数
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    cout << fixed << setprecision(4) << v * 1.0 / t << endl;
    return 0;
}

