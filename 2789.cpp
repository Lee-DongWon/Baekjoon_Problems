#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	char letter[100];
	int order = 0;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++) {
		if (word[i] != 'A' && word[i] != 'B' && word[i] != 'C' && word[i] != 'D' && word[i] != 'E' && word[i] != 'G' && word[i] != 'M' && word[i] != 'R' && word[i] != 'I') {
			letter[order] = word[i];
			order++;
		}
	}

	for (int i = 0; i < order; i++) {
		cout << letter[i];
	}

	return 0;
}