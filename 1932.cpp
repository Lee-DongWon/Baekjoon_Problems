#include <stdio.h>

int Max(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int n, max = 0;
	int d[501][501] = { 0 };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &d[i][j]);

			if (j == 1) {
				d[i][j] = d[i - 1][j] + d[i][j];
			}
			else if (j == i) {
				d[i][j] = d[i - 1][j - 1] + d[i][j];
			}
			else {
				d[i][j] = Max(d[i - 1][j - 1], d[i - 1][j]) + d[i][j];
			}

			if (max < d[i][j]) {
				max = d[i][j];
			}
		}
	}

	printf("%d", max);

	return 0;
}