#include <iostream>
#include "Student.h"
using namespace std;
Student::Student() : studentId(""), score(0.0) {}

Student::Student(string id, double sc) : studentId(id), score(sc) {}

void Student::setData(string id, double sc) {
    studentId = id;
    score = sc;
}
void Student::display() const {
    cout << "Ñ§ºÅ: " << studentId << "\t³É¼¨: " << score << endl;
}
string Student::getId() const {
    return studentId;
}
double Student::getScore() const {
    return score;
}
