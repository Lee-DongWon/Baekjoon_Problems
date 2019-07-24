#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int price, a, b, c, d;

		cin >> price;

		a = price / 25;
		price %= 25;

		b = price / 10;
		price %= 10;

		c = price / 5;
		price %= 5;

		d = price;

		cout << a << " " << b << " " << c << " " << d << endl;
	}

	return 0;
}