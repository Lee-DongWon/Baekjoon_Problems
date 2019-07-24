#include <iostream>
#include <string>

using namespace std;

int main() {
	int length = 0;
	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (i == 0) {
			length += 10;
		}
		else {
			if (str[i] == str[i - 1]) {
				length += 5;
			}
			else {
				length += 10;
			}
		}
	}

	cout << length << endl;

	return 0;
}
