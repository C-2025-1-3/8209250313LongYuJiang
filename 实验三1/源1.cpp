#include<iostream>
using namespace std;
void calculate(int a, int b, int& gys, int& gbs) {
	int oa = a;
	int ob = b;
	while (b != 0) {
		int c = b;
		b = a % b;
		gys = b;
	}
	gbs = oa * ob / gys;
}
int main() {
	int m, n;
	cout << "请输入两个数" << endl;
	cin >> m >> n;
	if (m <= 0 && n <= 0)
		cout << "错误，请输入正整数" << endl;
	int gys, gbs;
	void calculate(int m, int n, int& gys, int& gbs);
		cout << m << "和" << n << "的最大公因数和最小公倍数分别是" << gys << "和" << gbs << endl;
	return 0;
}