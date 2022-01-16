//
// Sort.cpp: 重载函数运算符，对整数数组从大到小排序
//

#include "sort.h"

void Sort::operator()(int *array, int len) {
    // 使用插入排序算法
    for (int i = 0; i < len; i++) {
        int temp, max = -65536, pos = -1;
        for (int j = i; j < len; j++) {
            if (array[j] > max) {
                max = array[j];
                pos = j;
            }
        }
        temp = array[i];
        array[i] = array[pos];
        array[pos] = temp;
    }
}