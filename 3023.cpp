#include <iostream>
using namespace std;

int main() {
	char card[101][101];
	int r, c, er, ec;
	cin >> r >> c;
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
			cin >> card[i][j];
	cin >> er >> ec;

	for (int rr = 1; rr <= r; rr++) {
		for (int j = 1; j <= c; j++) {
			if (rr == er && j == ec)
				cout << (card[rr][j] == '#' ? '.' : '#');
			else
				cout << card[rr][j];
		}
		for (int j = c; j >= 1; j--) {
			if (rr == er && 2 * c - j + 1 == ec)
				cout << (card[rr][j] == '#' ? '.' : '#');
			else
				cout << card[rr][j];
		}
		cout << '\n';
	}
	for (int rr = r; rr >= 1; rr--) {
		for (int j = 1; j <= c; j++) {
			if (2 * r - rr + 1 == er && j == ec)
				cout << (card[rr][j] == '#' ? '.' : '#');
			else
				cout << card[rr][j];
		}
		for (int j = c; j >= 1; j--) {
			if (2 * r - rr + 1 == er && 2 * c - j + 1 == ec)
				cout << (card[rr][j] == '#' ? '.' : '#');
			else
				cout << card[rr][j];
		}
		cout << '\n';
	}

	return 0;
}