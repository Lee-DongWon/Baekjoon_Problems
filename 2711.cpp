#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int wrong;
		string word;

		cin >> wrong;
		cin >> word;

		for (int j = wrong - 1; j < word.length() - 1; j++) {
			word[j] = word[j + 1];
		}

		for (int j = 0; j < word.length() - 1; j++) {
			cout << word[j];
		}
		cout << endl;
	}

	return 0;
}