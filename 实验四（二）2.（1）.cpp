#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	const char* p1, * p2, * start;
	for (start = s2; *start != '\0'; start++) {
		p1 = s1;
		p2 = start;
		while (*p1 != '\0' && *p2!='\0' && *p1 == *p2) {
			p1++;
			p2++;
		}
		if (*p1 == '\0') {
			return start - s2;
		}
	}
	return -1;
}
int main() {
	const int MAX_LEN = 1000;
	char s1[MAX_LEN], s2[MAX_LEN];
	cout << "请输入字符串s1:";
	cin.getline(s1, MAX_LEN);
	cout << "请输入字符串s2:";
	cin.getline(s2, MAX_LEN);
	int result = indexof(s1, s2);
	if (result != -1) {
		cout << "s1是s2的子串，第一次匹配的下标为：" << result << endl;
	}
	else {
		cout << "s1不是s2的子串" << endl;
	}
	return 0;
}