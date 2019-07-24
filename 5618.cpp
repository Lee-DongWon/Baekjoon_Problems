#include <stdio.h>

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

int main() {
	int n, result;

	scanf("%d", &n);

	if (n == 2) {
		int a, b;

		scanf("%d %d", &a, &b);
		result = gcd(a, b);
	}
	else {
		int a, b, c;

		scanf("%d %d %d", &a, &b, &c);
		result = gcd(gcd(a, b), c);
	}

	for (int i = 1; i <= result; i++) {
		if (result%i == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}