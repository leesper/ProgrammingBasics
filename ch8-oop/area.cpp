//
// 计算面积
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

enum shape {
    CIRCLE, TRIANGLE, RECTANGLE
};

const double PI = 3.14;

class Shape {
public:
    Shape(){};
    virtual ~Shape() {}
    virtual void showArea() = 0;
};

class Circle: public Shape {
public:
    Circle(double r) { radius = r; }
    //补充该函数
    void showArea() {
        printf("%.2f\n", PI * radius * radius);
    }
private:
    double radius;
};

class Triangle: public Shape {
public:
    Triangle(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    //补充该函数
    void showArea() {
        double p = (a + b + c) / 2;
        printf("%.2f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    }
private:
    double a, b, c;
};

class Rectangle: public Shape {
public:
    Rectangle(double x, double y) {
        width = x;
        height = y;
    }
    //补充该函数
     void showArea() {
        printf("%.2f\n", width * height);
    }
private:
    double width, height;
};

//补充该函数
void calArea(Shape* ptr){
    ptr->showArea();
}

void init(){
     //浮点输出初始化
}

int main() {
    init();
    int type;
    cin >> type;
    if (type == CIRCLE) {
        double r;
        cin >> r;
        Circle circle(r);
        calArea(&circle);
    } else if (type == TRIANGLE) {
        double a, b, c;
        cin >> a >> b >> c;
        Triangle triangle(a, b, c);
        calArea(&triangle);
    } else if (type == RECTANGLE){
        double x, y;
        cin >> x >> y;
        Rectangle rectangle(x, y);
        calArea(&rectangle);
    }
    return 0;
}
