#include <iostream>

using namespace std;

int gcd(long long a, long long b) {
	long long mod = 0;

	while (mod = a % b) {
		a = b;
		b = mod;
	}

	return b;
}

int main() {
	long long result = 0, a, b;

	cin >> a >> b;

	result = a * b / gcd(a, b);

	cout << result << endl;

	return 0;
}