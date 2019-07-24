#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'D' && word[i] <= 'Z') {
			word[i] -= 3;
		}
		else {
			word[i] += 23;
		}
		cout << word[i];
	}
	cout << endl;

	return 0;
}