#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		string word;
		cin >> word;

		if (word[word.length() / 2] == word[word.length() / 2 - 1]) {
			cout << "Do-it" << endl;
		}
		else {
			cout << "Do-it-Not" << endl;
		}
	}

	return 0;
}