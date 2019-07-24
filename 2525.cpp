#include <stdio.h>

int main() {
	int a, b, c;
	int hour, min;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	hour = c / 60;
	min = c % 60;

	a += hour;
	b += min;

	if (b >= 60) {
		a += 1;
		b %= 60;
	}

	a %= 24;

	printf("%d %d\n", a, b);

	return 0;
}