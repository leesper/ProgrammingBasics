#include <iostream>
using namespace std;
class Integer {
private:
    int _num;
public:
    //构造函数
    Integer(int num) {
        _num = num;
    }
 
    //计算当前 Integer 和 b 之间的最大公约数
    int gcd(Integer b) {
        int greatestCommonDivisor, m, n, t;
        m = _num; 
        n = b._num;
        if (m > n) {
            t = m;
            m = n;
            n = t;
        }
        t = n % m;
        while (t != 0) {
            n = m;
            m = t;
            t = n % m;
        }
        return m;
    }
};
 
int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}