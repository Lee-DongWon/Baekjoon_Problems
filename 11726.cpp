#include <stdio.h>

int main() {
	int n;
	int fibo[1001] = { 0 };
	fibo[0] = 1;
	fibo[1] = 1;

	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10007;
	}

	printf("%d\n", fibo[n]);

	return 0;
}