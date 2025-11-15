#include<iostream>
using namespace std;
int main()
{
    char x;
    cout << "输入一个字符 ";
    cin >> x;

    if (x >= 'a' && x <= 'z') 
        char y = x - 32;  
        cout << "转为大写 " << y << endl;
}