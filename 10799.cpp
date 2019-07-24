#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 0, sum = 0;
	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			cnt++;
		}
		else {
			if (str[i - 1] == '(') {
				cnt--;
				sum = sum + cnt;
			}
			else {
				sum++;
				cnt--;
			}
		}
	}

	cout << sum << endl;

	return 0;
}