#include <stdio.h>

int main() {
	int n, result = 1;

	scanf("%d", &n);

	result = result * n*(n - 1)*(n - 2)*(n - 3);
	result /= 24;

	printf("%d\n", result);

	return 0;
}