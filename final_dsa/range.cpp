#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int range(int *pInt, int n, int a, int b);
int find_index_of(const int *pInt, int lo, int hi, int t);
int comp(const void *a, const void *b);

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int *points = new int[n];
    int *answer = new int[m];

    for (int i = 0; i < n; i++) {
        scanf("%d", points+i);
    }

    qsort(points, n, sizeof(int), comp);

    int a, b;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        answer[i] = range(points, n, a, b);
    }

    for (int i = 0; i < m; i++) {
        printf("%d\n", answer[i]);
    }

    delete[] points;
    delete[] answer;
    return 0;
}

int comp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int range(int *pInt, int n, int a, int b) {

    int indexA = find_index_of(pInt, 0, n, a);
    int indexB = find_index_of(pInt, 0, n, b);

    int count = 0;
    if (indexB < n && pInt[indexB] == b) {
        count = indexB - indexA + 1;
    } else if (indexB >= n || (indexB < n && pInt[indexB] != b)) {
        count = indexB - indexA;
    }
    return count;
}

int find_index_of(const int *pInt, int lo, int hi, int t) {
    while (lo < hi) {
        int mi = (lo + hi) / 2;
        if (t < pInt[mi])
            hi = mi;
        else if (pInt[mi] < t)
            lo = mi + 1;
        else
            return mi;
    }
    return lo;
}
