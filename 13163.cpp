#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, len, sInd;

	cin >> n;
	cin.ignore();

	while (n--) {
		string name;
		getline(cin, name);

		len = name.length();

		for (int i = 0; i < len; i++) {
			if (name[i] == ' ') {
				sInd = i;
				break;
			}
		}

		cout << "god";
		for (int i = sInd + 1; i < len; i++) {
			if (name[i] == ' ') {
				continue;
			}
			cout << name[i];
		}
		cout << endl;
	}
	return 0;
}