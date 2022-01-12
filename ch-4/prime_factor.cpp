//
// 质因数分解
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string prime_factor(long num);
int main() {
    int n;

    cin >> n;
    long* nums = new long[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        cout << to_string(nums[i]) + "=" + prime_factor(nums[i]) << endl;
    }

    delete[] nums;

    return 0;
}

string prime_factor(long num) {
    for (long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return to_string(i) + "*" + prime_factor(num / i);
    }
    return to_string(num);
}
