#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		string word;

		cin >> word;

		for (int i = 0; i < word.length(); i++) {
			if ('A' <= word[i] && word[i] <= 'Z') {
				word[i] += 32;
				cout << word[i];
			}
			else if ('a' <= word[i] && word[i] <= 'z') {
				cout << word[i];
			}
		}
		cout << endl;
	}
	return 0;
}