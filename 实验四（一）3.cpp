#include<iostream>
#include<vector>
using namespace std;
int main() {
	const int S = 100;
	const int L = 100;
	vector<bool> lockers(L, false);
	for (int s = 1; s <= S; s++) {
		for (int l = s - 1; l < L; l += s) {
			lockers[l] = !lockers[l];
		}
	}
	cout << "开着的储物柜号码：";
	bool first = true;
	for (int i=0; i <= L; i++) {
		if (lockers[i]) {
			if (!first) {
				cout << " ";
			}
			cout << (i + 1);
			first = false;
		}
	}
	cout << endl;
	return 0;
}