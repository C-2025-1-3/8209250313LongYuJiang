#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int i = 0;
	while (s[i] != '\0') {
		char ch = s[i];
		if (isalpha(ch)) {
			ch = tolower(ch);
			counts[ch - 'a']++;
		}
		i++;
	}
}
int main() {
	const int MAX_LEN = 1000;
	char str[MAX_LEN];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(str, MAX_LEN);
	count(str, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			char letter = 'a' + i;
			cout << letter << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}