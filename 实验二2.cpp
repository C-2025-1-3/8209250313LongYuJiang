#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "x=";
	cin >> x;
	if (x > 0&&x < 1)
	y = 3 - 2 * x;
	else if (x >= 1&&x < 5)
	y = 2 / (4 * x) + 1;
	else 
	y = x * x;
	cout << "y=" << y << endl;
	return 0;
}