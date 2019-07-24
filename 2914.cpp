#include <stdio.h>

int main() {
	int a, b, result;

	scanf("%d %d", &a, &b);

	result = a * (b - 1) + 1;

	printf("%d\n", result);

	return 0;
}