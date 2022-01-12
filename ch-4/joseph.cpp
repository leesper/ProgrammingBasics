//
// 约瑟夫问题
//

#include <iostream>
using namespace std;

int next(int* arr, int len, int pos);
int main() {
    int arr[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 10;
    int pos = 0;

    while (n > 1) {
        pos = next(arr, 10, pos);
        if (arr[pos] == 1) {
            arr[pos] = 0;
            n--;
        } else {
            while (arr[pos] == 0)
                pos = (pos + 1) % 10;
            arr[pos] = 0;
            n--;
        }
    }

    for (int i = 0; i < 10; i++)
        if (arr[i] == 1)
            cout << i+1 << endl;

    return 0;
}

int next(int* arr, int len, int pos) {
    int count = 0;
    while (count < 5) {
        if (arr[pos] == 1)
            count++;
        pos = (pos + 1) % len;
    }
    return pos;
}