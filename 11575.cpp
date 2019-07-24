#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int a, b, c;
		string word;

		cin >> a >> b;
		cin >> word;
		for (int i = 0; i < word.length(); i++) {
			c = word[i] - 65;
			c = (a*c + b) % 26;
			word[i] = c + 65;
		}

		for (int i = 0; i < word.length(); i++) {
			cout << word[i];
		}
		cout << endl;
	}
	return 0;
}