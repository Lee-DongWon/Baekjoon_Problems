#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;

	getline(cin, word);

	if (word[0] == 'A') {
		if (word[1] == '+') {
			cout << "4.3";
		}
		else if (word[1] == '0') {
			cout << "4.0";
		}
		else {
			cout << "3.7";
		}
	}

	else if (word[0] == 'B') {
		if (word[1] == '+') {
			cout << "3.3";
		}
		else if (word[1] == '0') {
			cout << "3.0";
		}
		else {
			cout << "2.7";
		}
	}

	else if (word[0] == 'C') {
		if (word[1] == '+') {
			cout << "2.3";
		}
		else if (word[1] == '0') {
			cout << "2.0";
		}
		else {
			cout << "1.7";
		}
	}

	else if (word[0] == 'D') {
		if (word[1] == '+') {
			cout << "1.3";
		}
		else if (word[1] == '0') {
			cout << "1.0";
		}
		else {
			cout << "0.7";
		}
	}

	else {
		cout << "0.0";
	}

	return 0;
}