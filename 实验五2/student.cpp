#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;
Student::Student() {
    num = 0;
    strcpy(name, "");
    sex = ' ';
}
Student::Student(int n, const char* nm, char s) {
    num = n;
    strcpy(name, nm);
    sex = s;
}
void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strcpy(name, nm);
    sex = s;
}
void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
    cout << "-------------------" << endl;
}
