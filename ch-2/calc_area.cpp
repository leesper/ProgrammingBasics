//
// 程序设计基础：小明画了一个圆形的饼。这个饼的半径为2.52384，问这个饼的面积有多大？
// （pi取3.1415926），小数点后保留4位
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double const PI = 3.1415926;
    double radius = 2.52384;
    double area = PI * radius * radius;
    cout << fixed << setprecision(4) << area << endl;
    return 0;
}


