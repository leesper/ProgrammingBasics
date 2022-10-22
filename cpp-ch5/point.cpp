#include <iostream>
using namespace std;

class Point {
    private:
        double x, y;
        static int count;
    public:
        Point(double x, double y) : x(x), y(y) { ++count; }
        ~Point() { --count; }
        static void showCount() {
            cout << count << endl;
        }
        void showPoint() {
            cout << "Point(" << x << "," << y << ")" << endl;
        }
};

int Point::count = 0;

int main() {
    int x, y;
    Point* points[100];
    int i = 0;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) {
            Point::showCount();
            break;
        }
        points[i++] = new Point(x, y);
    }

    return 0;
}