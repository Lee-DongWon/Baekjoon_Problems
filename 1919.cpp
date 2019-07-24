#include <iostream>
#include <string>

using namespace std;

int arr1[26] = { 0 };
int arr2[26] = { 0 };

int getSub(int a, int b) {
	if (a > b) {
		return a - b;
	}
	else {
		return b - a;
	}
}

int main() {
	int sum = 0;
	string word1, word2;

	cin >> word1;
	cin >> word2;

	for (int i = 0; i < word1.length(); i++) {
		arr1[word1.at(i) - 'a']++;
	}
	for (int i = 0; i < word2.length(); i++) {
		arr2[word2.at(i) - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		sum += getSub(arr1[i], arr2[i]);
	}

	cout << sum << endl;

	return 0;
}