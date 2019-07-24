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
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int M, N, x, y, year;

		cin >> M >> N >> x >> y;

		if (x == M && y == N) {
			year = lcm(M, N);
			cout << year << endl;
		}
		else {
			if (x == M) {
				x = 0;
			}

			if (y == N) {
				y = 0;
			}

			for (int j = 0; j < N; j++) {
				if ((M*j + x) % N == y) {
					year = M * j + x;
					break;
				}
				year = -1;
			}
			cout << year << endl;
		}
	}
	return 0;
}