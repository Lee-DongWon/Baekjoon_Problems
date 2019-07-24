#include <stdio.h>

int main() {
	int n;
	int num[1001][10] = { 0 };
	int result = 0;

	scanf("%d", &n);

	for (int i = 0; i < 10; i++) {
		num[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				num[i][j] = (num[i][j] + num[i - 1][k]) % 10007;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		result += num[n][i];
		result %= 10007;
	}

	printf("%d", result);

	return 0;
}