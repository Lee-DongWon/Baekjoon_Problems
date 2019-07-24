#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	int num = 1;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++) {
		if (word[i] == ',') {
			num++;
		}
	}

	cout << num << endl;

	return 0;
}