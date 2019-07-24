#include <iostream>

using namespace std;

int gcd(int a, int b) {
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
		return gcd(b, a%b);
	}
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}



int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;

		cin >> a >> b;

		cout << lcm(a, b) << " " << gcd(a, b) << endl;
	}


	return 0;
}