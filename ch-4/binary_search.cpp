// 折半查找
#include <iostream>
using namespace std;

int main() {
    int cards[] = {101, 112, 113, 206, 207, 208, 303, 304, 309, 311, 402, 405, 410};
    int id = -1, low = 0, high = 12;

    while (low <= high) {
        int middle = (low + high) / 2;
        if (112 == cards[middle]) {
            id = middle;
            break;
        } else if (112 < cards[middle]) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }

    if (id == -1) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << "Q AT POSITION OF " << id + 1 << endl;
    }

    return 0;
}

