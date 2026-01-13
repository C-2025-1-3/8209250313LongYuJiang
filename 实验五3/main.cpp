#include <iostream>
#include "Cuboid.h"

using namespace std;

int main() {
    cout << "===== 长方柱体积计算程序 =====" << endl;

    Cuboid cuboid1, cuboid2, cuboid3;

    cout << "请为第1个长方柱输入尺寸：" << endl;
    cuboid1.inputDimensions();

    cout << "\n请为第2个长方柱输入尺寸：" << endl;
    cuboid2.inputDimensions();

    cout << "\n请为第3个长方柱输入尺寸：" << endl;
    cuboid3.inputDimensions();

    cout << "\n===== 体积计算结果 =====" << endl;
    cout << "第1个长方柱：" << endl;
    cuboid1.displayVolume();

    cout << "第2个长方柱：" << endl;
    cuboid2.displayVolume();

    cout << "第3个长方柱：" << endl;
    cuboid3.displayVolume();
    return 0;
}