#include <iostream>
#include "Student.h"
using namespace std;
void findMaxScore(Student* students, int n) {
    if (n <= 0) {
        cout << "学生数量无效！" << endl;
        return;
    }
    Student* maxStudent = &students[0];  
    double maxScore = students[0].getScore();
    for (int i = 1; i < n; i++) {
        if (students[i].getScore() > maxScore) {
            maxScore = students[i].getScore();
            maxStudent = &students[i];  
        }
    }
    cout << "\n===== 最高成绩者信息 =====" << endl;
    cout << "学号: " << maxStudent->getId() << endl;
    cout << "成绩: " << maxStudent->getScore() << endl;
}
