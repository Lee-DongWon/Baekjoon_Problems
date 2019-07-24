#include <stdio.h>

int main() {

	int n;
	int fibo[46] = { 0 };

	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 46; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	scanf("%d", &n);

	printf("%d", fibo[n]);

	return 0;
}