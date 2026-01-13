#include <iostream>
#include "Cuboid.h"

using namespace std;
Cuboid::Cuboid() : length(0), width(0), height(0), volume(0) {}
Cuboid::Cuboid(double l, double w, double h)
    : length(l), width(w), height(h) {
    volume = calculateVolume();
}
void Cuboid::inputDimensions() {
    cout << "请输入长方柱的长: ";
    while (!(cin >> length) || length <= 0) {
        cout << "输入无效，请输入正数: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "请输入长方柱的宽: ";
    while (!(cin >> width) || width <= 0) {
        cout << "输入无效，请输入正数: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "请输入长方柱的高: ";
    while (!(cin >> height) || height <= 0) {
        cout << "输入无效，请输入正数: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    volume = calculateVolume();
}
double Cuboid::calculateVolume() {
    return length * width * height;
}
void Cuboid::displayVolume() {
    cout << "长方柱的体积为: " << volume << endl;
}
void Cuboid::displayAllInfo() {
    cout << "==========================" << endl;
    cout << "长: " << length << endl;
    cout << "宽: " << width << endl;
    cout << "高: " << height << endl;
    cout << "体积: " << volume << endl;
    cout << "==========================" << endl;
}