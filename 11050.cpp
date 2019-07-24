#include <stdio.h>

int comb(int a, int b) {
	int result = 1;

	if (b > a / 2) {
		b = a - b;
	}

	for (int i = 0; i < b; i++) {
		result = result * (a - i) / (i + 1);
	}

	return result;
}

int main() {
	int n, k, result;

	scanf("%d %d", &n, &k);

	result = comb(n, k);

	printf("%d\n", result);

	return 0;
}

