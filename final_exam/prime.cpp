//
// 素数间距
//
#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

bool is_prime(long num);
int main() {
    long l, u;
    long n1, n2;
    long c1, c2, deltaC = LONG_MAX;
    long d1, d2, deltaD = LONG_MIN;
    cin >> l >> u;

    vector<long> numbers;

    for (long i = l; i <= u; i++) {
        if (i > 1) {
            numbers.push_back(i);
        }
    }

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (!is_prime(*it)) {
            numbers.erase(it);
        } else {
            ++it;
        }
    }

    if (numbers.size() <= 1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < numbers.size() - 1; i++) {
            n1 = numbers[i];
            n2 = numbers[i+1];

            if ( (n2 - n1) < deltaC ) {
                deltaC = n2 - n1;
                c1 = n1;
                c2 = n2;
            }

            if (deltaD < n2 - n1) {
                deltaD = n2 - n1;
                d1 = n1;
                d2 = n2;
            }
        }

        cout << c1 << " " << c2 << endl;
        cout << d1 << " " << d2 << endl;
    }

    return 0;
}

bool is_prime(long num) {
    for (long i = 2; i <= sqrt((double) num); i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}