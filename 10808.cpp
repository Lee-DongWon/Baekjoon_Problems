#include <iostream>
#include <string>

using namespace std;

int main() {
	int alph[26] = { 0 };
	string word;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++) {
		alph[word[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alph[i] << " ";
	}

	return 0;
}