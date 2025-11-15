#include<iostream>
using namespace std;
int main()
{
	const float PI = 3.14159;
	int r, h,V;
	cout << "r=" << endl;
	cin >> r;
	cout << "h=" << endl;
	cin >> h;
	V = 1 / 3 * PI * r * r * h;
	cout << "V="<< V << endl;
	return 0;
}