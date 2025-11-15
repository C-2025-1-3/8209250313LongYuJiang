#include<iostream>
using namespace std;
int main()
{
	setprecision (2);
	float F,C;
	cout << "F=";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "C=" << C << endl;
	return 0;
}