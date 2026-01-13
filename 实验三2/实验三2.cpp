#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;       
    if (num % 2 == 0) return false;  

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;      
    int num = 2;
    int primes_found = 0; 

    cout << "前200个素数为：" << endl;

    while (primes_found < 200) {
        if (is_prime(num)) {
            cout << setw(6) << num << " ";  

            primes_found++;
            count++;

            if (count == 10) {
                cout << endl;
                count = 0;
            }
        }
        num++;
    }

    if (count != 0) {
        cout << endl;
    }

    return 0;
}
