#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[26];
	string word;
	cin >> word;

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (int i = 0; i < word.length(); i++) {
		if (arr[word.at(i) - 97] == -1) {
			arr[word.at(i) - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}