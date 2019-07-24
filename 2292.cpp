#include <stdio.h>

int Sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}

int main() {
	int n;
	int result = 0;

	scanf("%d", &n);

	while (6 * Sum(result) + 1 < n) {
		result++;
	}

	printf("%d", result + 1);

	return 0;
}