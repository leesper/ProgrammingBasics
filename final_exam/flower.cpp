//
// 题目：过冬
//

#include <iostream>
#include <climits>
using namespace std;

class Flower {
public:
    int x, y;
    Flower() {}
    Flower(int x, int y): x(x), y(y) {}
};

int main() {
    int n;
    long x, y;
    long maxX = LONG_MIN, minX = LONG_MAX, deltaMaxX;
    long maxY = LONG_MIN, minY = LONG_MAX, deltaMaxY;
    cin >> n;

    Flower* flowers = new Flower[n];

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        flowers[i] = Flower(x, y);
    }

    for (int i = 0; i < n; i++) {
        if (flowers[i].x < minX)
            minX = flowers[i].x;

        if (maxX < flowers[i].x)
            maxX = flowers[i].x;

        if (flowers[i].y < minY)
            minY = flowers[i].y;

        if (maxY < flowers[i].y)
            maxY = flowers[i].y;
    }

    deltaMaxX = maxX - minX;
    deltaMaxY = maxY - minY;

    cout << (deltaMaxX > deltaMaxY ? deltaMaxX : deltaMaxY) << endl;

    delete[] flowers;
    return 0;
}