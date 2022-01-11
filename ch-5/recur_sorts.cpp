// 归并排序
#include <iostream>
using namespace std;

void merge_sort(int* arr, int start, int end);
void quick_sort(int* arr, int len);

int main() {
    int cards[] = {4, 1, 10, 15, 37, 79, 24, 11, 91, 2, 18, 9, 45, 21, 52, 83, 98, 90};
//    merge_sort(cards, 0, 17);
    quick_sort(cards, 18);
    for (int i = 0; i < 18; i++)
        cout << cards[i] << " ";
    cout << endl;
    return 0;
}

void merge_sort(int* arr, int start, int end) {
    if (start == end)
        return;

    int middle = (start + end) / 2;
    merge_sort(arr, start, middle);
    merge_sort(arr, middle + 1, end);

    int* temp = new int[end - start + 1];
    int i = start, j = middle + 1, k = 0;

    while(i <= middle && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= middle) temp[k++] = arr[i++];
    while (j <= end) temp[k++] = arr[j++];

    for (i = start, k = 0; i <= end && k < end - start + 1; i++, k++) {
        arr[i] = temp[k];
    }

    delete[] temp;
}

void quick_sort(int* arr, int len) {
    if (len <= 1) return;

    int* left = new int[len];
    int* right = new int[len];

    int i = 0, j = 0, key = arr[0];
    for (int k = 1; k < len; k++) {
        if (arr[k] < key)
            left[i++] = arr[k];

        if (arr[k] > key)
            right[j++] = arr[k];
    }

    quick_sort(left, i);
    quick_sort(right, j);

    for (int k = 0; k < i; k++)
        arr[k] = left[k];

    arr[i++] = key;

    for (int k = 0; k < j; k++)
        arr[i++] = right[k];

    delete[] left;
    delete[] right;
}

