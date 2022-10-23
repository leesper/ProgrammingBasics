#include<iostream>
#include<iomanip>
#include<sstream>
#include<string>
using namespace std;

int main() {
    int m, n;
    double d;

    while (cin >> m >> n >> d) {
        if ( m == 0 && n == 0)
            cout << 0 << endl; 
		else {
            cout << setw(m) << setfill('0') << int(d);
            if (n != 0) { 
                ostringstream os;
                os << fixed << setprecision(n+1) << d - int(d);
                string str = os.str();
                for (int i = 1;i <= n + 1; i++)
                    cout << str[i];
            }
            cout << endl;
        }
    }
}