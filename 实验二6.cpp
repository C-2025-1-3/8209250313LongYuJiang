#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b;
	while (b != 0)
		int c = b;
	b = a % b;
	a = c;
	return a;
}