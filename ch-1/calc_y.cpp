//
// 《程序设计基础》第一章编程作业：y = sin(π/4)^2 + sin(π/4)cos(π/4) - cos(π/4)^2
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.1415926;
    double y = sin(PI / 4.0) * sin(PI / 4.0) +
            sin(PI / 4.0) * cos(PI / 4.0) -
            cos(PI / 4.0) * cos(PI / 4.0);
    cout << fixed << setprecision(5) << y << endl;
    return 0;
}