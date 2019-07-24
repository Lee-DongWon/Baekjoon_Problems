#include <iostream>

using namespace std;

int main() {

	cin.tie(0);
	std::ios::sync_with_stdio(false);

	int r, c; cin >> r >> c;
	int a, b; cin >> a >> b;

	for (int i = 0; i < r*a; i++) {
		for (int j = 0; j < c*b; j++) {
			if (i % (a * 2) < a == j % (b * 2) < b) {
				cout << "X";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;

}