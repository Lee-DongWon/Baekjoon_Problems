#include <stdio.h>

int main() {
	int n, a, b, c;

	scanf("%d", &n);

	a = n / 300;
	n %= 300;
	b = n / 60;
	n %= 60;
	c = n / 10;
	n %= 10;

	if (n != 0) {
		printf("-1\n");
	}

	else {
		printf("%d %d %d\n", a, b, c);
	}

	return 0;
}