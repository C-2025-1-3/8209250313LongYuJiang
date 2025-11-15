#include <iostream>
using namespace std;
int main() 
{
    double num1, num2;
    char x;
    double result;
    cout << "输入式子: ";
    cin >> num1 >> x >> num2;
    switch (x) {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;

    case '/':
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
            return 1;
        }
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;

    case '%':
        if ((int)num2 == 0) {
            cout << "除数不能为0" << endl;
            return 1;
        }
        result = (int)num1 % (int)num2;
        cout << (int)num1 << " % " << (int)num2 << " = " << (int)result << endl;
        break;
    return 0;
}