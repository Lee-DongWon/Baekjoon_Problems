#include <iostream>
#include <string>

using namespace std;

int main() {
	while (1) {
		string str;
		char right[500];

		getline(cin, str);

		if (str == "END") {
			break;
		}
		else {
			for (int i = 0; i < str.length(); i++) {
				right[i] = str[str.length() - 1 - i];
			}

			for (int i = 0; i < str.length(); i++) {
				cout << right[i];
			}
			cout << endl;
		}
	}

	return 0;
}