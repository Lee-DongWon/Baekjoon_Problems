#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	int cnt = 0;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}