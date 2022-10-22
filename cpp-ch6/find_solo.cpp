#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int i = 0;
    while (numbers[i] == numbers[i+1]) {
        i += 2;
    }

    cout << numbers[i] << endl;

    return 0;
    
}