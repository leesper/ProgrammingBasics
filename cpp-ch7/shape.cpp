#include <iostream>
using namespace std; 
 
class Shape
{
protected:
    int w, h;
public:
    Shape(int w, int h): w(w), h(h){}
}; 
 
/* 实现两个派生类 */
class Rectangle: public Shape {
    public:
        Rectangle(int w, int h): Shape(w, h) {}
        double area() const {
            return w * h;
        }
};

class Triangle: public Shape {
    public:
        Triangle(int w, int h): Shape(w, h) {}
        double area() const { 
            return w * h / 2.0;
        }
};
 
int main()
{
    int w, h;
    cin >> w >> h;
    Rectangle a(w, h);
    cout << a.area() << endl;
    cin >> w >> h;
    Triangle b(w, h);
    cout << b.area() << endl;
    return 0;
}