#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

/*完善此函数*/
double calArea(double a, double b, double c) throw (invalid_argument) {
    double area;
    if (a == b || a == c || b == c) {
        double p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
    } else {
        throw invalid_argument("The input is illegal");
    }
    return area;
}

int main(){
    double a, b, c;

    cin >> a >> b >> c;

    try {
        double area = calArea(a, b, c);
        cout << area << endl;
    } catch(exception e) {
        cout << e.what() << endl;
    }

    return 0;
}