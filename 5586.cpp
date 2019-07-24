#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	int num_joi = 0, num_ioi = 0;
	getline(cin, word);

	for (int i = 0; i < word.length() - 2; i++) {
		if (word[i] == 'J' && word[i + 1] == 'O' && word[i + 2] == 'I') {
			num_joi++;
		}
		else if (word[i] == 'I' && word[i + 1] == 'O' && word[i + 2] == 'I') {
			num_ioi++;
		}
	}

	cout << num_joi << endl << num_ioi << endl;

	return 0;
}