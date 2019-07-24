#include <stdio.h>

int main() {
	long long n, sum = 0;

	scanf("%lld", &n);

	for (long long i = 1; i < n; i++) {
		sum += n * i + i;
	}

	printf("%lld\n", sum);

	return 0;
}