#include <stdio.h>

int main() {
	int n, sum = 5;

	scanf("%d", &n);

	if (n == 1) {
		printf("%d\n", sum);
	}
	else {
		for (int i = 2; i <= n; i++) {
			sum += 3 * i + 1;
			sum %= 45678;
		}
		printf("%d\n", sum);
	}

	return 0;
}