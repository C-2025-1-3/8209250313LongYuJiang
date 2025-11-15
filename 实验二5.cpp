#include<iostream>
using namespace std;
int main()
{
    char c;
    int letters = 0;   
    int spaces = 0;     
    int digits = 0;    
    int others = 0;     
    cout << "ÊäÈëÒ»ĞĞ×Ö·û: ";
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else {
            others++;
        }
        cout << "Ó¢ÎÄ×ÖÄ¸: " << letters  << endl;
        cout << "¿Õ¸ñ: " << spaces  << endl;
        cout << "Êı×Ö×Ö·û: " << digits  << endl;
        cout << "ÆäËû×Ö·û: " << others  << endl;
        return 0;
}

    
   