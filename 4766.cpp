#include <iostream>

using namespace std;

int main() {
	double a, b;
	cin >> a;

	while (1) {
		cin >> b;
		if (b == 999) {
			return 0;
		}
		else {
			cout << fixed;
			cout.precision(2);
			cout << b - a << endl;
			a = b;
		}
	}
	return 0;
}