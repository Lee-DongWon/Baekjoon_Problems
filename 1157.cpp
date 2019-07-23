#include <iostream>
#include <string>

using namespace std;

int main() {
	int alphabet[26] = { 0 };
	char ans;
	string str;
	int len, max = 0;

	getline(cin, str);
	len = str.length();

	for (int i = 0; i < len; i++) {
		if (65 <= str[i] && str[i] <= 90) {
			alphabet[str[i] - 65]++;
		}
		else if (97 <= str[i] && str[i] <= 122) {
			alphabet[str[i] - 97]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			ans = i + 65;
			max = alphabet[i];
		}
		else if (alphabet[i] == max) {
			ans = '?';
		}
	}

	cout << ans << endl;

	return 0;
}