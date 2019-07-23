#include <stdio.h>

int main() {
	int n, m, a, b, c, count = 0;
	scanf("%d", &n);
	a = n / 10;
	b = n % 10;
	c = a + b;
	if (c >= 10) {
		c = c % 10;
	}
	m = 10 * b + c;

	while (m != n) {
		count++;
		a = m / 10;
		b = m % 10;
		c = a + b;
		if (c >= 10) {
			c = c % 10;
		}
		m = 10 * b + c;
	}

	printf("%d", count + 1);


	return 0;
}