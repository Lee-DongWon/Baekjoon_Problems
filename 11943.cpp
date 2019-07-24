#include <stdio.h>

int main() {
	int a, b, c, d;
	int sum1, sum2, result;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	sum1 = a + d;
	sum2 = b + c;

	if (sum1 > sum2) {
		result = sum2;
	}
	else {
		result = sum1;
	}

	printf("%d\n", result);

	return 0;
}