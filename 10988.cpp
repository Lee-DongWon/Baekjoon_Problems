#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	char word1[100];
	int result = 1;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++) {
		word1[i] = word[word.length() - 1 - i];
		word1[word.length() - 1 - i] = word[i];
	}

	for (int i = 0; i < word.length(); i++) {
		if (word1[i] != word[i]) {
			result = 0;
			break;
		}
	}

	cout << result << endl;

	return 0;
}