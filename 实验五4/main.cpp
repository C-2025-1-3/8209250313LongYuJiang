#include <iostream>
#include "Student.h"
#include "max_function.cpp"
using namespace std;
int main() {
    const int NUM_STUDENTS = 5;
    Student students[NUM_STUDENTS]; 
    cout << "===== 请输入5个学生的信息 =====" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        string id;
        double score;

        cout << "\n第" << i + 1 << "个学生：" << endl;
        cout << "请输入学号: ";
        cin >> id;

        cout << "请输入成绩: ";
        while (!(cin >> score) || score < 0 || score > 100) {
            cout << "输入无效，请输入0-100之间的成绩: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        students[i].setData(id, score);
    }
    cout << "\n===== 所有学生信息 =====" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "学生" << i + 1 << ": ";
        students[i].display();
    }
    findMaxScore(students, NUM_STUDENTS);
    return 0;
}
