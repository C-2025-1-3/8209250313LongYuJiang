#include <iostream>
#include "Student.h"
using namespace std;
int main() {
    Student stud1;
    stud1.set_value(1001, "张三", 'M');
    cout << "学生1信息：" << endl;
    stud1.display();
    Student stud2(1002, "李四", 'F');
    cout << "学生2信息：" << endl;
    stud2.display();
    Student stud3(1003, "tcg", 'm');
    cout << "学生3信息：" << endl;
    stud3.display();
    cout << "修改学生3信息后：" << endl;
    stud3.set_value(1007, "王五", 'M');
    stud3.display();
    return 0;
}
