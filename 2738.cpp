#include <stdio.h>

int main() {
	int a[100][100] = { 0 }, b[100][100] = { 0 }, c[100][100] = { 0 };
	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

}