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
	int a, b, c, d;
	int up_fraction, bottom_fraction;
	int div;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	up_fraction = a * d + b * c;
	bottom_fraction = b * d;

	div = gcd(up_fraction, bottom_fraction);

	printf("%d %d\n", up_fraction / div, bottom_fraction / div);

	return 0;
}