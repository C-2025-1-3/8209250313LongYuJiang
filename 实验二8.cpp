#include <iostream>
using namespace std;
int main() {
    double a;
    cout << "输入一个数 a: ";
    cin >> a;
    double b = a;          
    double x;             
    double e = 1e-5;  
    do {
        x = 0.5 * (b + a / b); 
        if (fabs(x - b < e) {
            break;
        }          
    cout << "a 的平方根为: " << x << endl;
    return 0;
}