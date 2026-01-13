#include <iostream>
#include "Point.h"
using namespace std;
int main() {
    cout << "===== Point类验证程序 =====" << endl;

    Point point(60, 80);
    cout << "\n1. 构造函数已调用，坐标初始化为(60, 80)" << endl;
    point.display();

    int i, j;
    cout << "\n2. 请输入要增加的i和j值：" << endl;
    cout << "i = ";
    cin >> i;
    cout << "j = ";
    cin >> j;

    point.setPoint(i, j);
    cout << "setPoint函数已调用，坐标修改为(60+" << i << ", 80+" << j << ")" << endl;

    cout << "\n3. 修改后的坐标值：" << endl;
    point.display();

    cout << "\n4. 验证结果：" << endl;
    cout << "预期坐标: (" << 60 + i << ", " << 80 + j << ")" << endl;
    cout << "实际坐标: (" << point.getX() << ", " << point.getY() << ")" << endl;

    if (point.getX() == 60 + i && point.getY() == 80 + j) {
        cout << "✓ 验证成功！程序正确运行。" << endl;
    }
    else {
        cout << "✗ 验证失败！" << endl;
    }
    return 0;
}
