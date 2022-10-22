#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int *arr, int size);
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxSubArraySum(arr, n) << endl;
}

int maxSubArraySum(int *arr, int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += arr[j];
            if (sum > max) max = sum;
        }
    }
    return max;
}