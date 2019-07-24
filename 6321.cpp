#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;
		char change[50];
		cin >> word;

		for (int j = 0; j < word.length(); j++) {
			if (word.at(j) != 'Z') {
				change[j] = word.at(j) + 1;
			}
			else {
				change[j] = 'A';
			}
		}

		cout << "String #" << i + 1 << endl;
		for (int j = 0; j < word.length(); j++) {
			cout << change[j];
		}
		cout << endl << endl;
	}

	return 0;
}