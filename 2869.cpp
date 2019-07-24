#include <stdio.h>

int main() {
	int a, b, c, d;
	int day;

	scanf("%d %d %d", &a, &b, &c);

	d = c - a;

	if (d % (a - b) == 0) {
		day = d / (a - b) + 1;
	}
	else {
		day = d / (a - b) + 2;
	}

	printf("%d", day);

	return 0;
}