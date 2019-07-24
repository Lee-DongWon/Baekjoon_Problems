#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	int place = 1;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (word.at(i) == 'A') {
			if (place == 1) {
				place = 2;
			}
			else if (place == 2) {
				place = 1;
			}
			else {
				place = 3;
			}
		}
		else if (word.at(i) == 'B') {
			if (place == 1) {
				place = 1;
			}
			else if (place == 2) {
				place = 3;
			}
			else {
				place = 2;
			}
		}
		else {
			if (place == 1) {
				place = 3;
			}
			else if (place == 2) {
				place = 2;
			}
			else {
				place = 1;
			}
		}
	}

	cout << place << endl;


	return 0;
}