//
// Created by 李科君 on 2022/7/23.
//
#include <iostream>
using namespace std;

int range(int *pInt, int n, int a, int i);

int main() {
    int n, m;
    cin >> n >> m;

    int *points = new int[n];
    int *answer = new int[m];

    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        answer[i] = range(points, n, a, b);
    }

    for (int i = 0; i < m; i++) {
        cout << answer[i] << endl;
    }

    delete[] points;
    delete[] answer;
    return 0;
}

int range(int *pInt, int n, int a, int b) {
    int *ptr = pInt;
    while (*ptr < a && ptr < pInt + n) {
        ptr++;
    }

    int count = 0;
    for (; ptr < pInt + n; ptr++) {
        if (a <= *ptr && *ptr <= b) {
            count++;
        }
    }

    return count;
}
