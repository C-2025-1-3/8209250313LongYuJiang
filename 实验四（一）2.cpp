#include<iostream>
using namespace std;
void bubblesort(double list[],int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for(int j=0;j<listSize-1;j++)
			if (list[j] > list[j + 1]) {
				swap list[j] with list[j + 1];
				changed = true;
			}
	} while (changed);
}
void displayarray(double list[],int listSize) {
	for (int i = 0; i < listSize; i++) {
		cout << list[i];
	}
}
int main() {
	const int size = 10;
	double num[size];
	cout << "输入一个含有10个双精度数字" << endl;
	for (int i = 0; i < size; i++) {
		cout << "数字" << i + 1 << ":";
		cin >> num[i];
	}
	bubblesort(num, size);
	cout << "排序后的数组:";
	displayarray(num, size);
	return 0;
}