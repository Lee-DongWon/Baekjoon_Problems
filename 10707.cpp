#include <stdio.h>

int main() {
	int price1, price2;
	int a, b, c, d, p;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &p);

	price1 = p * a;

	if (c >= p) {
		price2 = b;
	}
	else {
		price2 = b + (p - c)*d;
	}

	if (price1 > price2) {
		printf("%d", price2);
	}
	else {
		printf("%d", price1);
	}

	return 0;
}