#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
T findMedian(vector<T>& values) {
    sort(values.begin(), values.end());
    return values[values.size() / 2];
}
int main() {
    int m, n;
    cin >> m >> n;
    vector<int> integers(m);
    vector<double> doubles(n);

    for (int i = 0; i < m; i++) {
        cin >> integers[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> doubles[i];
    }

    cout << findMedian(integers) << endl;
    cout << findMedian(doubles) << endl;

    return 0;
}

