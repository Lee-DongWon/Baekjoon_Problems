#include <iostream>

using namespace std;

int Gcd(int a, int b) {
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a%b == 0) {
		return b;
	}
	else {
		return Gcd(b, a%b);
	}
}

int Lcm(int a, int b) {
	return a * b / Gcd(a, b);
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		cout << Lcm(a, b) << endl;
	}

	return 0;
}