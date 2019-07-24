#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] += 32;
		}
		else {
			word[i] -= 32;
		}
	}

	for (int i = 0; i < word.length(); i++) {
		cout << word[i];
	}

	return 0;
}