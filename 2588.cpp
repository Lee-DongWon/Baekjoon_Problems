#include <stdio.h>

int main() {
	int a, b;
	int r1, r2, r3, r4;

	scanf("%d", &a);
	scanf("%d", &b);

	r1 = a * (b % 10);
	r2 = a * ((b % 100) / 10);
	r3 = a * (b / 100);
	r4 = 100 * r3 + 10 * r2 + r1;

	printf("%d\n", r1);
	printf("%d\n", r2);
	printf("%d\n", r3);
	printf("%d\n", r4);


	return 0;
}