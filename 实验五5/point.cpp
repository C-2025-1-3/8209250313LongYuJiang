#include <iostream>
#include "Point.h"
using namespace std;
Point::Point() : x(0), y(0) {
    cout << "默认构造函数被调用，坐标初始化为(0, 0)" << endl;
}
Point::Point(int x_val, int y_val) : x(x_val), y(y_val) {
    cout << "带参数构造函数被调用，坐标初始化为(" << x << ", " << y << ")" << endl;
}
void Point::setPoint(int i, int j) {
    x = 60 + i;
    y = 80 + j;
    cout << "setPoint函数被调用，坐标设置为(60+" << i << ", 80+" << j
        << ") = (" << x << ", " << y << ")" << endl;
}
void Point::setXY(int x_val, int y_val) {
    x = x_val;
    y = y_val;
    cout << "setXY函数被调用，坐标设置为(" << x << ", " << y << ")" << endl;
}
void Point::display() const {
    cout << "当前坐标: (" << x << ", " << y << ")" << endl;
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}
