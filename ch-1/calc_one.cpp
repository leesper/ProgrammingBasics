//
// 《程序设计基础》第一章编程作业：计算1+1/(1+1/(1+1/5))，保留四位小数
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float result = 1.0 + 1.0 / (1.0 + 1.0 / (1.0 + 1.0 / 5.0));
    cout << fixed << setprecision(4) << result << endl;
    return 0;
}
