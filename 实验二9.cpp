#include<iostream>
using namespace std;
int main()
{
	double price = 0.8;
	double cost = 0;
	double percost;
	int day = 1;
	int apple = 2;
	while (apple <= 100)
	{
		cost += apple * price;
		apple *= 2;
		day++;
		if (apple > 100)
		{
			break;
		}
	}
	percost = cost / day;
	cout << "每天花" << percost << "元" << endl;
	return 0;
}