#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit"
        << setw(15) << "Fahrenheit" << setw(12) << "Celsius" << endl;
    cout << string(52, '-') << endl;
    double celsius = 40.0;
    double fahrenheit = 120.0;

    while (celsius >= 31.0) {
        double fah_from_cel = celsius_to_fah(celsius);
        double cel_from_fah = fahrenheit_to_cels(fahrenheit);
        cout << fixed << setprecision(2);
        cout << setw(10) << celsius
            << setw(15) << fah_from_cel
            << setw(15) << fahrenheit
            << setw(12) << setprecision(2) << cel_from_fah << endl;
        celsius -= 1.0;
        fahrenheit -= 10.0;
    }
    return 0;
}
