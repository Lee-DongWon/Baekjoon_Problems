#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	int sum = 0, cnt = 0;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (word.at(i) >= 'a' && word.at(i) <= 'z') {
			sum += word.at(i) - 96;
		}
		else {
			sum += word.at(i) - 38;
		}
	}

	for (int i = 1; i <= sum; i++) {
		if (sum % i == 0) {
			cnt++;
		}
	}

	if (sum == 1) {
		cout << "It is a prime word." << endl;
	}
	else if (cnt == 2) {
		cout << "It is a prime word." << endl;
	}
	else {
		cout << "It is not a prime word." << endl;
	}

	return 0;
}