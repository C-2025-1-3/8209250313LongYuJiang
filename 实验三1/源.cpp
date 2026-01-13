#include<iostream>
using namespace std;
int gys(int a, int b) {
	while (b != 0) {
		int c = b;
		a = a % b;
		a = c;
	}
	return a;
}
int main()
{
	int m, n;
	cout << "请输入两个数" << endl;
	cin >> m >> n;
	if (m <= 0 && n <= 0)
		cout << "错误，请输入正整数" << endl;
	int result = gys(m, n);
	cout << m << "和" << n << "的最大公因数是" << result << endl;
	return 0;
}