#include"mytemperature.h"
#include<iomanip>
#include<iostream>
using namespace std;
double celsius_to_fah(double cel) {
	return cel = cel * 9 / 5 - 32;
}
double fahrenheit_to_cels(double fah) {
	return fah = (fah + 32) * 5 / 9;
}