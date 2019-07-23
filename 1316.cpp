#include <iostream>
#include <string>

using namespace std;

bool wordCheck(string str) {
	int alph[26] = { 0 };

	for (int i = 0; i < str.length(); i++) {
		if (alph[str[i] - 'a'] != 0) {
			return false;
		}
		else {
			char tmp = str[i];
			alph[str[i] - 'a']++;

			while (1) {
				if (tmp != str[++i]) {
					i--;
					break;
				}
			}
		}
	}
	return true;
}

int main() {
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;

		cin >> word;

		if (wordCheck(word)) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}