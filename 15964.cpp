#include <stdio.h>

int main() {
	int a, b;
	long long result;

	scanf("%d %d", &a, &b);

	result = (a + b)*(a - b);

	printf("%lld\n", result);

	return 0;
}