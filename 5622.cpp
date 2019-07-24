#include <iostream>
#include <string>

using namespace std;

int gettime(char c) {
	if ('A' <= c && c <= 'C') {
		return 3;
	}
	else if ('D' <= c && c <= 'F') {
		return 4;
	}
	else if ('G' <= c && c <= 'I') {
		return 5;
	}
	else if ('J' <= c && c <= 'L') {
		return 6;
	}
	else if ('M' <= c && c <= 'O') {
		return 7;
	}
	else if ('P' <= c && c <= 'S') {
		return 8;
	}
	else if ('T' <= c && c <= 'V') {
		return 9;
	}
	else {
		return 10;
	}
}

int main() {
	int sum = 0;
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		sum = sum + gettime(word[i]);
	}

	cout << sum << endl;

	return 0;
}