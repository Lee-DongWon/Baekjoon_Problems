#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		int x, y;

		cin >> a >> b;
		x = a / b;
		y = a % b;

		cout << "You get " << x << " piece(s) and your dad gets " << y << " piece(s)." << endl;
	}

	return 0;
}