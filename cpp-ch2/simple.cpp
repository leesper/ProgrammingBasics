#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m;
    int sum = 0, min = INT_MAX, max = INT_MIN;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        sum += m;
        if (m < min) {
            min = m;
        }

        if (m > max) {
            max = m;
        }
    }

    cout << sum << " " << min << " " << max << endl;

    return 0;
}