//
// 给定一个三角形的三条边的边长（符合三角形的构成条件），求三角形的面积，精确到小数点后2位
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, p, s;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}

