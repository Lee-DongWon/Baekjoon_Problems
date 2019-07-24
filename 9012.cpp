#include <iostream>
#include <string>

using namespace std;

bool Check(string str) {
	int len = str.length();
	int total = 0;

	for (int i = 0; i < len; i++) {
		char c = str[i];
		if (c == '(') {
			total++;
		}
		else {
			if (total > 0) {
				total--;
			}
			else {
				return false;
			}
		}
	}

	if (total == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (Check(str)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}