#include <iostream>

using namespace std;

int main() {
	int t;
	int score1 = 100, score2 = 100;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;

		cin >> a >> b;

		if (a > b) {
			score2 -= a;
		}
		else if (b > a) {
			score1 -= b;
		}
	}

	cout << score1 << endl << score2 << endl;

	return 0;
}