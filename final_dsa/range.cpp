//
// Created by 李科君 on 2022/7/23.
//
#include <iostream>
#include <cstdlib>
using namespace std;

int range(int *pInt, int n, int a, int b);
int comp(const void *a, const void *b);

int *find_first_gte(int *pInt, int l, int r, int t);

int *find_first_lte(int *pInt, int l, int r, int t);

int main() {
    int n, m;
    cin >> n >> m;

    int *points = new int[n];
    int *answer = new int[m];

    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    qsort(points, n, sizeof(int), comp);

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

    int *p1 = find_first_gte(pInt, 0, n-1, a);
    int *p2 = find_first_lte(pInt, 0, n-1, b);

    return (p2 - p1) + 1;
}

int *find_first_lte(int *pInt, int l, int r, int t) {
    int *pos = nullptr;

    while (l <= r) {
        int m = (l + r) / 2;
        if (t == pInt[m]) {
            pos = pInt + m;
            break;
        } else if (t < pInt[m]) {
            r = m - 1;
            pos = pInt + r;
        } else {
            l = m + 1;
            pos = pInt + m;
        }
    }
    return pos;
}

int *find_first_gte(int *pInt, int l, int r, int t) {
    int *pos = nullptr;

    while (l <= r) {
        int m = (l + r) / 2;
        if (t == pInt[m]) {
            pos = pInt + m;
            break;
        } else if (t < pInt[m]) {
            r = m - 1;
            pos = pInt + m;
        } else {
            l = m + 1;
            pos = pInt + l;
        }
    }
    return pos;
}

int comp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
