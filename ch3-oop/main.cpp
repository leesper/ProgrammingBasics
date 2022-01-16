//
// 主函数
//

#include <iostream>
#include "sort.h"
using namespace std;

int main() {
    int numbers[] = {3, 2, 1, 0, 5, 4, 6, 9, 8};
    Sort sort = Sort();
    sort(numbers, 9);

    for (auto e : numbers) {
        cout << e << " ";
    }

    cout << endl;

    return 0;
}