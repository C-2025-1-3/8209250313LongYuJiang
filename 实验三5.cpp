#include<iostream>
using namespace std;
int peach(int day) {
	return day == 10 ? 1 : (peach(day + 1) + 1) * 2;
}
int main() {
	cout << "第一天摘了" << peach(1) << "个桃子" << endl;
	return 0;
}