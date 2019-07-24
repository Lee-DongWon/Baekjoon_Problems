#include <stdio.h>

int main() {
	int n;
	long long int fibo[91] = { 0 };

	scanf("%d", &n);

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i <= 90; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	printf("%lld\n", fibo[n]);

	return 0;
}