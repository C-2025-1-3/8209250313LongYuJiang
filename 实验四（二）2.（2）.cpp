#include<iostream>
#include<cctype>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	const char* ptr = hexString;
	if (ptr[0] == '0' && (ptr[1] == 'x' || ptr[1] == 'X')) {
		ptr += 2;
	}
	while (*ptr != '\0') {
		char ch = toupper(*ptr);
		if (ch >= '0' && ch <= '9') {
			result = result * 16 + (ch - '0');
		}
		else if (ch >= 'A' && ch <= 'F') {
			result = result * 16 + (ch - 'A' + 10);
		}
		else {
			break;
		}
		ptr++;
	}
	return result;
}
int main() {
	const int MAX_LEN = 100;
	char hexStr[MAX_LEN];
	cout << "parseHex(\"A5\")=" << parseHex("A5") << endl;
	cout << "parseHex(\"0xFF\")=" << parseHex("0xFF") << endl;
	cout << "parseHex(\"1a3f\")=" << parseHex("1a3f") << endl;
	cout << "\n请输入一个16进制数：";
	cin >> hexStr;
	cout << "转换成10进制：" << parseHex(hexStr) <<endl;
	return 0;
}