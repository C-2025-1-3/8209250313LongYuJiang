#include<iostream>
using namespace std;
int main()
{
	int i;
	int j;
	for (int i = 0; i <= 5; i++)
		for (int j = 0; j <= i; j++)
			cout << "*";
	if (i != 5)
		cout << endl;
}