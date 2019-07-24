#include <stdio.h>

int Gcd(int n, int m) {
	int temp;

	if (n < m) {
		temp = n;
		n = m;
		m = temp;
	}

	if (n%m == 0) {
		return m;
	}
	else {
		return Gcd(m, n%m);
	}
}

int Lcm(int n, int m) {
	return n * m / Gcd(n, m);
}

int main() {
	int n, m;
	int gcd, lcm;

	scanf("%d %d", &n, &m);

	gcd = Gcd(n, m);
	lcm = Lcm(n, m);

	printf("%d\n", gcd);
	printf("%d\n", lcm);

	return 0;
}