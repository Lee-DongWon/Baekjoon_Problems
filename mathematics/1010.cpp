#include <iostream>

using namespace std;

int comb(int a, int b) {
	int k = 1;

	if (a > b / 2) {
		a = b - a;
	}

	for (int i = 0; i < a; i++) {
		k = k * (b - i) / (i + 1);
	}

	return k;
}

int main() {
	int n;

	cin >> n;


	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		if (a == 0) {
			cout << "0" << endl;
		}

		else {
			cout << comb(a, b) << endl;
		}
	}

	return 0;
}
