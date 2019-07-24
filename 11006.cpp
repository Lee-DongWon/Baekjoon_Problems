#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int a, b;
		int x, y;

		cin >> a >> b;

		x = 2 * b - a;
		y = b - x;

		cout << x << " " << y << endl;
	}

	return 0;
}