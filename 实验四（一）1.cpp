#include<iostream>
using namespace std;
int main() {
	int num[10], unique[10], count = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		bool isnew = true;

		for (int j = 0; j < 10; j++) {
			if (unique[j] == num[i]) {
				bool isnew = false;
				break;
			}
		}
		if (isnew) {
			unique[count++] == num[i];
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < count; i++) {
		cout << unique[i]<<"";
	}
	return 0;
}